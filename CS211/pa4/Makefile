all: c-sim

c-sim: c-sim.o
	gcc c-sim.o -o c-sim

c-sim.o: c-sim.c
	gcc -g -pedantic -Wall -c c-sim.c -o c-sim.o

clean:
	rm -f c-sim c-sim.o
