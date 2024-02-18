myWC.exe: counts.o myWC.o
	g++ counts.o myWC.o -o myWC.exe

counts.o: counts.cpp
	g++ -c counts.cpp -o counts.o

myWC.o: myWC.cpp
	g++ -c myWC.cpp -o myWC.o

clean:
	rm *.o myWC.exe