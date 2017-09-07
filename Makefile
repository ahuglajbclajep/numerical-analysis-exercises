CC = gcc
CFLAGS = -std=c99 -O2
LDFLAGS = -lm
INCLUDE = -I$(SRC_DIR)

APP_NAME = Root-Finding
SRC_DIR = src
OBJ_DIR = build
SRC = $(shell ls $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/$(APP_NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

all: clean $(OBJ_DIR)/$(APP_NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) $(INCLUDE) -MMD -MP -o $@ $<

run:
	@make
	@cd $(OBJ_DIR) && ./$(APP_NAME)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d) $(OBJ_DIR)/$(APP_NAME)

-include $(OBJ:.o=.d)

.PHONY: all run clean
