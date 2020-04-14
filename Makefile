CC = gcc
CFLAGS = -std=c99 -O2
LDFLAGS = -lm
LIBS =
INCLUDE = -I$(SRC_DIR)

APP_NAME = $(notdir $(CURDIR))
SRC_DIR = src
OBJ_DIR = build
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/$(APP_NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -MMD -MP -o $@ -c $<

all: clean $(OBJ_DIR)/$(APP_NAME)

run:
	@make -f ../Makefile
	@cd $(OBJ_DIR) && ./$(APP_NAME)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d) $(OBJ_DIR)/$(APP_NAME)

-include $(OBJ:.o=.d)

.PHONY: all run clean
