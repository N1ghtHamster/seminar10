all: func

func: main.o func.o
	gcc main.o func.o -o main.exe
	
main.o:
	gcc -c main.c
	
func.o:
	gcc -c func.c
	
rm:
	del *.o main.exe
