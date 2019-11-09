ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o random.o
	$(CC) -o test_rand main.o random.o

main.o: main.c random.h
	$(CC) -c main.c

random.o: random.c random.h
	$(CC) -c random.c

run:
	./test_rand

memcheck:
	valgrind --leak-check:yes ./test_rand
