main.o: main.c
	g++ -g main.c
	
clean:
	rm -rf *.o
