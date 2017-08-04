CC = gcc
CFLAGS = -std=c99 -O2
LDFLAGS = -lm
LIBS =

BUILD_DIR = build

bin = Root_Finding
entry_point = main.c
test_entry_point = test.c
src = secant.c newton-raphson.c

all: run

.PHONY: build
build:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(entry_point) $(src) $(LDFLAGS) $(LIBS) -o $(BUILD_DIR)/$(bin)

clean:
	rm -rf $(BUILD_DIR)

run: build
	@cd $(BUILD_DIR) && ./$(bin)

test:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(test_entry_point) $(src) $(LDFLAGS) $(LIBS) -o $(BUILD_DIR)/$(bin)_test
	@cd $(BUILD_DIR) && ./$(bin)_test
