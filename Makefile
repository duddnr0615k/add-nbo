add-nbo:	add-nbo.o

add-nbo.o:	add-nbo.c
	gcc -c -o add-nbo.o add-nbo.c
clean :
	rm *.o add-nbo

