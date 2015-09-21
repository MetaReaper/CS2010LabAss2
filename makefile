CrapsGame : CS2010Lab2.o
	g++ CS2010Lab2.o -o CrapsGame

CS2010Lab2.o : CS2010Lab2.cpp
	g++ -c CS2010Lab2.cpp

clean:
	rm *.o Lab2Prog
