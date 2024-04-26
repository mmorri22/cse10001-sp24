# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror
CFLAGS := -std=c2x $(FLAGS)

# Create the homework10 Object
homework10.o: homework10.c
	$(CC) $(CFLAGS) -c homework10.c

# Create the rotations Objects
rotations.o: rotations.c
	$(CC) $(CFLAGS) -c rotations.c

# homework10 Objects
homework10_objs := homework10.o rotations.o

# homework10 Executable and Run
homework10: $(homework10_objs)
	$(CC) $(CFLAGS) -o homework10 $(homework10_objs) -lm
	valgrind --leak-check=full ./homework10

# Executable Names
executable_names := homework10

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
