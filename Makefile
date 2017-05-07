CC = gcc
CFLAGS =
LDFLAGS =
LIBS = -lm

src = main.c secant.c newton-raphson.c
bin = RootFinding

all: run

build:
	$(CC) $(CFLAGS) $(src) $(LDFLAGS) $(LIBS) -o $(bin)

run: build
	./$(bin)

clean:
	rm $(bin)
