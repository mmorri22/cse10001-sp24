# gcc is for the compiler for C
CC := gcc

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror
CFLAGS := -std=c2x $(FLAGS)

# Create the Homework 3 Object
homework09.o: homework09.c
	$(CC) $(CFLAGS) -c homework09.c

# Create the search_and_sort Object
sort_and_search.o: sort_and_search.c
	$(CC) $(CFLAGS) -c sort_and_search.c

# homework09 Objects
homework09_objs := homework09.o sort_and_search.o

# Homework 3 Executable and Run
homework09: $(homework09_objs)
	$(CC) $(CFLAGS) -o homework09 $(homework09_objs) -lm
	./homework09

# Executable Names
executable_names := homework09

# Make all
all: $(executable_names)

# Make clean
clean:
	rm -rf *.o *.swp $(executable_names)
