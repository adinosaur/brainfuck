CFLAGS= -fPIC -g
LDFLAGS= -rdynamic

all: a.out

libbrainfuck-c.so: brainfuck.py
	rpython --shared brainfuck.py

main.c.o: main.c
	gcc $(CFLAGS) -c main.c -o main.c.o

a.out: main.c.o libbrainfuck-c.so
	gcc $(LDFLAGS) main.c.o ./libbrainfuck-c.so -o a.out

clean:
	rm -f a.out main.c.o libbrainfuck-c.so *.pyc