sources = zad1.c zad2.c zad1_with_complexh.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

all : $(programs)
