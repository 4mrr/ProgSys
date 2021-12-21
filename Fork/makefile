useComplexeFork : useComplexeFork.o complexe.o
	gcc -Wall complexe.o useComplexeFork.o -lm -o useComplexeFork

useComplexeFork.o : useComplexeFork.c complexe.h
	gcc -Wall -c useComplexeFork.c

complexe.c : complexe.c complexe.h
	gcc -Wall -c complexe.c
clean :
	rm -f useComplexeFork *.o
