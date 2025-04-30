# This is the Makefile for the Lecture 27 Example.

# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror
CFLAGS := -std=c2x $(FLAGS)


# Build the main object
lec27.o: lec27.c
	$(CC) $(CFLAGS) -c lec27.c

# Build the sllist object
sllist.o: sllist.c
	$(CC) $(CFLAGS) -c sllist.c

# All Objects
lec27_objects := lec27.o sllist.o

# Compilation
lec27: $(lec27_objects)
	$(CC) $(CFLAGS) -o lec27 $(lec27_objects) -lm


# Build the main object
lec27_sol.o: lec27_sol.c
	$(CC) $(CFLAGS) -c lec27_sol.c

# Build the sllist object
sllist_sol.o: sllist_sol.c
	$(CC) $(CFLAGS) -c sllist_sol.c

# All Objects
lec27_sol_objects := lec27_sol.o sllist_sol.o

# Compilation
lec27_sol: $(lec27_sol_objects)
	$(CC) $(CFLAGS) -o lec27_sol $(lec27_sol_objects) -lm
	valgrind --leak-check=full ./lec27_sol

# All executables
executable_names := lec27 lec27_sol struct_align

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
