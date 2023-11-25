all: func

func: main.o func.o
	gcc main.o func.o -o main.exe

main.o: main.c
	gcc -c main.c

func.o: func.c
	gcc -c func.c

clean:
	del *.o main.exe
