#include <iostream>
#include "Account.h"
#include "Date.h"
#include "Transaction.h"
using namespace std;

int main(){
	Account A1("George", 1122, 1000);
	A1.deposit(30);
	A1.deposit(40);
	A1.deposit(50);

	A1.withdraw(5);
	A1.withdraw(4);
	A1.withdraw(2);


	cout << "Account holder name: " << A1.getName() << endl << endl;
	cout << "Annual Interest Rate: " << A1.getAnnualInterestRate() << "%" << endl;
	cout << "Monthly Interest Rate: " << A1.getMonthlyInterestRate() << "%" << endl << endl;
	cout << "Current Balance: " << A1.getBalance() << endl << endl << endl << endl << endl;
	cout << "Transaction History" << endl << endl;
	for (int i = 0; i < 6; i++){
		cout << "Transaction Type: " << A1.transactions[i].getType() << endl;
		cout << "Transaction Amount: $" << A1.transactions[i].getAmount() << endl;
		cout << "Balance After Transaction: $" << (A1.transactions[i].getBalance()) << endl;
		cout << "Transaction Description: " << A1.transactions[i].getDescription() << endl << endl;

	}

}