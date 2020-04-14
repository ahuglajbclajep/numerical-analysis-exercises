/* If the diagonal element is 0, swap rows to avoid division by zero. */
static void pivoting(int row, double matrix[][row+1], int current_row) {
    if (matrix[current_row][current_row] == 0) {
        for (int i=current_row+1; i<row; i++) {
            if (matrix[i][current_row] != 0) {
                /* swap elements of rows */
                for (int j=current_row; j<row+1; j++) {
                    double tmp = matrix[i][j];
                    matrix[i][j] = matrix[current_row][j];
                    matrix[current_row][j] = tmp;
                }
                break;
            }
        }
    }
}

static void diagonal_element_to_1(int row, double matrix[][row+1], int current_row) {
    double tmp = matrix[current_row][current_row];
    for (int i=current_row; i<row+1; i++) {
        matrix[current_row][i] /= tmp;
    }
}

static void below_diagonal_elements_to_0(int row, double matrix[][row+1], int current_row) {
    for (int i=current_row+1; i<row; i++) {
        double tmp = matrix[i][current_row];
        for (int j=current_row; j<row+1; j++) {
            matrix[i][j] -= tmp * matrix[current_row][j];
        }
    }
}

static void get_answer(int row, double matrix[][row+1], double answer[]) {
    for (int i=row-1; 0<=i; i--) {
        answer[i] = matrix[i][row];
        for (int j=row-1; i<j; j--) {
            answer[i] -= matrix[i][j] * answer[j];
        }
    }
}

void gaussian_elimination(int row, double matrix[][row+1], double answer[]) {
    // Convert augmented matrix to triangular matrix.
    for (int i=0; i<row; i++) {
        pivoting(row, matrix, i);
        diagonal_element_to_1(row, matrix, i);
        below_diagonal_elements_to_0(row, matrix, i);
    }

    // Get answer.
    get_answer(row, matrix, answer);
}
