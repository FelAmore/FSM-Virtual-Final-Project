main:
	gcc -o myLib.o -c myLib/myLib.c
	gcc -o main.out main.c myLib.o
	./main.out

clear:
	rm *.out
	rm *.o