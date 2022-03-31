#ifndef ACCOUNT_HEADER
#define ACCOUNT_HEADER
#include <iostream>
#include <sstream>
#include <ostream>
#include <vector>
#include <string>
#include "Money.h"

class Account: public Money {

private:

	std::vector<Money> deposits;
	std::vector<Money> withdrawals;

	bool updateNeeded = 1;
	std::string updatedBalance;

public:
	explicit Account(int dollars, int cents);

	void makeDeposit(Money m);
	void makeWithdrawals(Money m);

	void setUpdateFalse();

	friend std::ostream& operator<<(std::ostream& accOut, const Account& account);

};


#endif //ACCOUNT_HEADER
