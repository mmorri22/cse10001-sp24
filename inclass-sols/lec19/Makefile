# Name: Matthew Morrison
# Email: mmorri22@nd.edu
# Date: 4/10/2024
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

# Object List
parallel_objs := parallel_lib.o parallel_run.o

# Parallel Run Executable
parallel_run: $(parallel_objs)
	$(CC) $(CFLAGS) -o parallel_run $(parallel_objs)
	./parallel_run


# Parallel Also Object File
parallel_also.o:
	$(CC) $(CFLAGS) -c parallel_also.c

# Also Object List
parallel_also_objs := parallel_lib.o parallel_also.o

# Parallel Run Executable
parallel_also: $(parallel_also_objs)
	$(CC) $(CFLAGS) -o parallel_also $(parallel_also_objs)
	./parallel_also


# Executables
executables := parallel_run parallel_also

# Make all
all: $(executables)

# Clean
clean:
	rm -rf *.o *.swp $(executables)