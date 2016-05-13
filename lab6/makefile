programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CC = gcc
CFLAGS = -Wall -std=c11
LDLIBS = -lm -D_GNU_SOURCE

make:
			gcc -Wall -std=c11 zad1.c -o zad1
			gcc -Wall -std=c11 funkcje.c glowny.c -o glowny

.PHONY: clean
clean:
			rm -f zad1 glowny
