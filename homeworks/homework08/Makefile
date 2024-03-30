CC := gcc

FLAGS := -O2 -g -Wall -Wextra -Wconversion -Werror -Wshadow
CFLAGS := -std=c2x $(FLAGS)

means.o : means.c
	$(CC) $(CFLAGS) -c means.c

homework08.o : homework08.c
	$(CC) $(CFLAGS) -c homework08.c

homework08_objs := homework08.o means.o

homework08 : $(homework08_objs)
	$(CC) $(CFLAGS) -o homework08 $(homework08_objs) -lm


clean:
	rm -rf homework08 *.o *.swp
