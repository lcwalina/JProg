sources = zad1.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CC = gcc
CFLAGS = -Wall -std=c11
LDLIBS = -lm -D_GNU_SOURCE

all : $(programs)
