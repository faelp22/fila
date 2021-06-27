all: build

build: obj
	gcc -o fila *.o

obj: fila.c
	gcc -Wall -g -c main.c fila.c

clean:
	rm *.o fila

run: all
	./fila
