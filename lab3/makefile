sources = zad1.c zad2.c zad3.c zad4.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c99
LDLIBS = -lm

all : $(programs)
