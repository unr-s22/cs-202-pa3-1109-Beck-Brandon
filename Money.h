#ifndef MONEY_HEADER
#define MONEY_HEADER
#include <iostream>
#include <sstream>
#include <ostream>

class Money {
	
public:

	int dollars;
	int cents;

	int totalDollars = 0;
	int totalCents = 0;

	explicit Money(const int &dollars, const int &cents);
	explicit Money();

	friend std::ostream& operator<<(std::ostream& mOutput, const Money& m);

	friend Money operator +(const Money& money);
	friend Money operator -(const Money& money);

};

#endif //MONEY_HEADER
