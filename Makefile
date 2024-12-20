all: binary

binary: main.c
	gcc -o binary main.c -g

debug: main.c
	gdb ./binary

clean:
	rm binary
