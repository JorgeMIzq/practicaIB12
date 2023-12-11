CC = g++
CFLAGS = -std=c++11

all: circulo_main

circulo_main: circulo.cc circulo_main.cc
	$(CC) $(CFLAGS) -o circulo_main circulo.cc circulo_main.cc -lm

clean:
	rm -f circulo_main
