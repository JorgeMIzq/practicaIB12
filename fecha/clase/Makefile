# Makefile

fecha_main: fecha.o fecha_main.o
	g++ $^ -o $@

fecha.o: fecha.cc fecha.h
	g++ -c $<

fecha_main.o: fecha_main.cc fecha.h
	g++ -c $<

clean:
	rm -f *.o fecha_main

