count: main.o countertype.o
	g++ main.o countertype.o -o count

main.o: main.cpp
	g++ -c main.cpp

countertype.o: countertype.cpp countertype.h
	g++ -c countertype.cpp

clean:
	rm *.o count
