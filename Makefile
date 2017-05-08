CC = gcc
CFLAGS =
LDFLAGS =
LIBS = -lm

BUILD_DIR = build

src = main.c secant.c newton-raphson.c
bin = RootFinding
zip = $(bin)_src

all: run

.PHONY: build
build: $(src)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(src) $(LDFLAGS) $(LIBS) -o $(BUILD_DIR)/$(bin)

run: build
	@./$(bin)

clean:
	rm -r $(BUILD_DIR)

zip: $(mkdir)
	@mkdir -p $(BUILD_DIR)
	git archive -o $(BUILD_DIR)/$(zip).zip HEAD
