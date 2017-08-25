CC = gcc
CFLAGS = -std=c99 -O2
LDFLAGS = -lm

bin = Root-Finding
src = main.c \
	bisection.c \
	secant.c \
	newton-raphson.c

.PHONY: run
.SUFFIXES: .c .o

$(bin): $(src:.c=.o)
	$(CC) -o $@ $^ $(LDFLAGS)

all: clean $(bin)

.c.o:
	$(CC) $(CFLAGS) -c $<

run:
	@make && ./$(bin)

clean:
	$(RM) $(src:.c=.o) $(bin)
