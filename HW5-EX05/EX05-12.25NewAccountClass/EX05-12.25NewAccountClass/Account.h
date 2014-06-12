#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>
#include "Transaction.h"

class Account{
private:
	int id;
	double balance;
	double annualInterestRate;
	std::string name;
	

public:
	std::vector<Transaction> transactions;//Vector to keep track of Transaction objects
	Account();//Default constructor
	Account(std::string newName, int newID, double newBalance);//Constructor with specified name, ID, and balance
	int getID();//Returns ID
	double getBalance();//Returns balance
	double getAnnualInterestRate();//returns annual interest rate
	std::string getName();//returns name

	void setID(int newID);//Set Id
	void setBalance(double newBalance);//Set balance
	
	double getMonthlyInterestRate();//Returns monthly interest rate

	void withdraw(double amount);//remove money from the balance

	void deposit(double amount);//Add money to the balance
};

#endif