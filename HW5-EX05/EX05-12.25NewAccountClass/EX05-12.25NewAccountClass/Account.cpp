#include "Account.h"

Account::Account(){//Default constructor
	id = 0;
	balance = 0;
	annualInterestRate = 1.5;//annualInterestRate same for all accounts
}

Account::Account(std::string newName, int newID, double newBalance){//Custom constructor
	name = newName;
	id = newID;
	balance = newBalance;
	annualInterestRate = 1.5;//annualInterestRate same for all accounts
}

int Account::getID(){//Return the ID
	return id;
}

double Account::getBalance(){//Returns the Balance
	return balance;
}

double Account::getAnnualInterestRate(){//Returns the annual interest rate
	return annualInterestRate;
}

void Account::setID(int newID){//Sets a new ID
	id = newID;
}

void Account::setBalance(double newBalance){//Sets a new balance
	balance = newBalance;
}

double Account::getMonthlyInterestRate(){//Returns the monthly interest rate
	double x = (annualInterestRate / 12);
	return x;
}

void Account::withdraw(double amount){//remove money from the account
	static int i = 1;
	balance -= amount;//Subtract from the balance
	Transaction iA('W', amount, balance, "Withdrawl");//Create a new Transaction with the given numbers, type, and description
	transactions.push_back((iA));//Store the transaction object in the Transaction vector for the account object
	i++;
}

void Account::deposit(double amount){
	static int i = 1;
	balance += amount;//Add to the balance
	Transaction iA('D', amount, balance, "Deposit"); // Create a new Transaction with the given numbers, type, and description
	transactions.push_back((iA));//Store the transaction object in the Transaction vector for the account object
	i++;
}

std::string Account::getName(){//Return the name for the account
	return name;
}

