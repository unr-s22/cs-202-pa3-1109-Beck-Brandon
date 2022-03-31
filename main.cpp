#include "Account.h"
#include "Money.h"
#include <iostream>

int main() {

	Account account(300, 23);
	Money m(300, 23);
	std::cout << account << std::endl;
	account.setUpdateFalse();
	
	Money m1(200, 00);
	account.makeDeposit(m1);
	Money m2(300, 24);
	account.makeDeposit(m2);
	Money m3(501, 22);
	account.makeDeposit(m3);

	std::cout << account << std::endl;
	account.setUpdateFalse();

	Money m4(300, 10);
	account.makeWithdrawals(m4);
	Money m5(201, 34);
	account.makeWithdrawals(m5);

	std::cout << account << std::endl;
	account.setUpdateFalse();

	std::cout << account << std::endl;

}
