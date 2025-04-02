# Name: Matthew Morrison
# Email: matt.morrison@nd.edu
# File Name: Makefile
# 
# My first Makefile!

CC := gcc

CFLAGS := -std=c2x -O2 -g -Wall -Wextra -Wconversion -Wshadow -Werror -lm

# Parallel Library Object File
parallel_lib.o:
	$(CC) $(CFLAGS) -c parallel_lib.c

# Parallel Run Object File
parallel_run.o:
	$(CC) $(CFLAGS) -c parallel_run.c

# Objects List 
parallel_objs := parallel_lib.o parallel_run.o 

# Parallel Run Executable
parallel_run: $(parallel_objs)
	$(CC) $(CFLAGS) -o parallel_run $(parallel_objs)
	./parallel_run

executables := parallel_run

all: $(executables)

clean:
	rm -rf *.o *.swp $(executables)
