CC=gcc
CFLAGS=-Wall -g

OBJ=main.o menu.o calc.o prime.o utils.o

toolbox: $(OBJ)
	$(CC) $(OBJ) -o toolbox.exe

main.o: main.c menu.h
	$(CC) $(CFLAGS) -c main.c

menu.o: menu.c menu.h calc.h prime.h
	$(CC) $(CFLAGS) -c menu.c

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

prime.o: prime.c prime.h
	$(CC) $(CFLAGS) -c prime.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f *.o toolbox.exe