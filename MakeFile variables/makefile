OBJECTS = complexee.o useComplexee.o
CC = gcc
CFLAGS = -Wall -lm

useComplexee : $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o useComplexee

useComplexee.o : useComplexee.c complexee.h
	$(CC)  -c useComplexee.c

complexee.o : complexee.c complexee.h
	$(CC)  -c complexee.c
