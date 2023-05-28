CC = g++
 
lab5.exe:	main.o lib.o menu.o
	$(CC) -o lab5.exe main.o lib.o menu.o
 
main.o:	main.cpp
	$(CC) -c main.cpp

lib.o: lib.cpp lib.h
	$(CC) -c lib.cpp

menu.o: menu.cpp menu.h
	$(CC) -c menu.cpp

clean:
	rm -rf *.o 