sources = zad0.c zad1.c zad2.c zad3_1.c zad3_2.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c99
LDLIBS = -lm

all : $(programs)
