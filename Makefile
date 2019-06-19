smn: main.o nshort.o
	g++ -o smn  main.o nshort.o -lncurses -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
	rm *.o

main.o: main.cpp
	g++ -c main.cpp

nshort.o: nshort.cpp nshort.h
	g++ -c nshort.cpp
