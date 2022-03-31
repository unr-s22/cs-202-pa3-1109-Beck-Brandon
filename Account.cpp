#include "Account.h"
#include <iostream>

Account::Account(int dollars, int cents): Money(dollars, cents){

	totalDollars = dollars;
	totalCents = cents;
}

void Account::makeDeposit(Money m) {

	deposits.push_back(m);
	updateNeeded = 1;
}


void Account::makeWithdrawals(Money m) {

	withdrawals.push_back(m);
	updateNeeded = 1;
}

void Account::setUpdateFalse() {

	updateNeeded = 0;
}

std::ostream& operator<<(std::ostream& accOut, const Account& account) {

	if(account.updateNeeded) {
		accOut 
		<< "Account Details" << std::endl 
		<< "--------------------------" << std::endl 
		<< "Current Balance: " << "$" << account.totalDollars << "." << account.totalCents << std::endl 
		<< "--------------------------" << std::endl 
		<< "Number of Deposits: "<< account.deposits.size()<< std::endl 
		<< "--------------------" << std::endl;
		for(int i = 0; i < account.deposits.size(); i++) {
			accOut << "(" << (i+1) << ")" << account.deposits[i] << std::endl;
		}
		accOut
		<< "--------------------------" << std::endl
		<< "Number of Withdrawls: " << account.withdrawals.size() << std::endl
		<< "--------------------------" << std::endl;
		for(int j = 0; j < account.withdrawals.size(); j++) {
			accOut << "(" << (j+1) << ")" << account.withdrawals[j] << std::endl;
		};
	}

	return accOut;
}







