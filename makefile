my_mat.o : my_mat.c my_mat.h
	gcc -c -Wall my_mat.c

libmy_mat.a: my_mat.o my_mat.h
	ar rcu libmy_mat.a my_mat.o

main.o:main.c my_mat.h
	gcc -c -Wall main.c


connections:main.o libmy_mat.a
	gcc -Wall main.o ./libmy_mat.a -o connections 

.PHONY: clean

clean:
	rm *.o libmy_mat.a connections

all:connections