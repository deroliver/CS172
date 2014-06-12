#include "Transaction.h"

Transaction::Transaction(char newType, double newAmount, double newBalance, std::string newDescription){//Custom constructor to set the type, amount, balance, and description
	type = newType;
	amount = newAmount;
	balance = newBalance;
	description = newDescription;
}

char Transaction::getType(){//Return the type
	return type;
}

double Transaction::getAmount(){//Return the amount
	return amount;
}

double Transaction::getBalance(){//Return the balance
	return balance;
}

std::string Transaction::getDescription(){//Return the description
	return description;
}