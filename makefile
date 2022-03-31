pa3: main.o Account.o Money.o
	g++ main.o Account.o Money.o -o pa3

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.h Account.cpp
	g++ -c Account.cpp

Money.o: Money.h Money.cpp
	g++ -c Money.cpp

Clean:
	rm -f pa3 *.o
