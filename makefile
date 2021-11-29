my_mat.o : my_mat.c my_mat.h
	gcc -c -Wall my_mat.c

libmy_mat.a: my_mat.o my_mat.h
	ar rcu libmy_mat.a my_mat.o

main.o:main.c my_mat.h
	gcc -c -Wall main.c

my_mat2.o : my_mat2.c my_mat.h
	gcc -c -Wall my_mat2.c

libmy_mat2.a: my_mat2.o my_mat.h
	ar rcu libmy_mat2.a my_mat2.o

connections:main.o libmy_mat2.a
	gcc -Wall main.o ./libmy_mat2.a -o connections 

.PHONY: clean

clean:
	rm *.o *.a connections

all:connections