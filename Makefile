CC = g++
 
lab2.exe:	main.o lib.o 
	$(CC) -o lab2.exe main.o lib.o 
 
main.o:	main.cpp
	$(CC) -c main.cpp

lib.o: lib.cpp lib.h
	$(CC) -c lib.cpp

clean:
	rm -rf *.o 