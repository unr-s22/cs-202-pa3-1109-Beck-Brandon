#include "Money.h"
#include <iostream>

Money::Money(const int &dollars, const int &cents): dollars{dollars}, cents{cents} {

}


Money::Money() {

	dollars = 0;
	cents = 0;
} 


std::ostream& operator<<(std::ostream& mOutput, const Money& m) {
	
	if(m.cents < 10) {
		mOutput << "$" << m.dollars << ".0" << m.cents;
	}
	else {	
		mOutput << "$" << m.dollars << "." << m.cents;
	}
	return mOutput;
}


Money operator +(const Money& money) {
	Money m(money.totalDollars + money.dollars, money.totalCents + money.cents);
	return m;
}


Money operator -(const Money& money) {
	Money m(money.totalDollars - money.dollars, money.totalCents - money.cents);
	return m;
}











