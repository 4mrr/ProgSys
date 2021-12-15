OBJECTS = complexe.o useComplexe.o
CC = gcc
CFLAGS = -Wall -lm

useComplexe : $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o useComplexe

useComplexe.o : useComplexe.c complexe.h
	$(CC)  -c useComplexe.c

complexe.o : complexe.c complexe.h
	$(CC)  -c complexe.c
