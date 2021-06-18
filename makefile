all: main

main: main.o
	g++ -o test main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm main.o test
