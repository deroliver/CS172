#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include "Date.h"
#include <string>

class Transaction{
private:
	Date date;
	char type;
	double amount;
	double balance;
	std::string description;
public:
	Transaction(char newType, double newAmount, double newBalance, std::string newDescription);//Constructor, custom 'type', 'amount', 'balance', and 'description'
	char getType();//Returns type
	double getAmount();//Returns amount
	double getBalance();//Returns balance
	std::string getDescription();//Returns description
};

#endif