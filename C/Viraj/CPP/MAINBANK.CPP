#include<iostream.h>
#include<string.h>
#include<conio.h>

#define true 1

#define MAX_ACCOUNTS 100

class BankSystem {
private:
    int accountNumbers[MAX_ACCOUNTS];
    char accountHolderNames[MAX_ACCOUNTS][50];
    double balances[MAX_ACCOUNTS];
    int accountCount;

public:
    BankSystem() {
	accountCount = 0;
    }

    void createAccount() {
	cout<<"**************************************************************"<<endl;
	cout << "Enter account holder name: ";
	cin.ignore();
	cin.getline(accountHolderNames[accountCount], 50);

	accountNumbers[accountCount] = accountCount + 1;
	balances[accountCount] = 0.0;
	accountCount++;

	cout << "Account created! Account Number: " << accountNumbers[accountCount - 1] << endl;
    }

    void deposit() {
	int accountNumber;
	double amount;
	cout<<"**************************************************************"<<endl;
	cout << "Enter account number: ";
	cin >> accountNumber;
	if (accountNumber <= 0 || accountNumber > accountCount) {
	    cout << "Invalid account number." << endl;
	    return;
	}

	cout << "Enter amount to deposit: ";
	cin >> amount;
	if (amount <= 0) {
	    cout << "Invalid amount." << endl;
	    return;
	}

	balances[accountNumber - 1] += amount;
	cout << "Money deposited! New Balance: " << balances[accountNumber - 1] << endl;
    }

    void withdraw() {
	int accountNumber;
	double amount;
	cout<<"**************************************************************"<<endl;
	cout << "Enter account number: ";
	cin >> accountNumber;
	if (accountNumber <= 0 || accountNumber > accountCount) {
	    cout << "Invalid account number." << endl;
	    return;
	}
	cout<<"**************************************************************"<<endl;
	cout << "Enter amount to withdraw: ";
	cin >> amount;
	if (amount <= 0) {
	    cout << "Invalid amount." << endl;
	    return;
	}

	if (balances[accountNumber - 1] < amount) {
	    cout << "Not enough money." << endl;
	    return;
	}

	balances[accountNumber - 1] -= amount;
	cout << "Money withdrawn! New Balance: " << balances[accountNumber - 1] << endl;
    }

    void checkBalance() {
	int accountNumber;
	cout<<"**************************************************************"<<endl;
	cout << "Enter account number: ";
	cin >> accountNumber;
	if (accountNumber <= 0 || accountNumber > accountCount) {
	    cout << "Invalid account number." << endl;
	    return;
	}

	cout << "Account Balance: " << balances[accountNumber - 1] << endl;
    }

    void viewAllAccounts() {
    cout<<"**************************************************************"<<endl;
	if (accountCount == 0) {
	    cout << "No accounts available." << endl;
	    return;
	}

	cout << "All Bank Accounts:" << endl;
	for (int i = 0; i < accountCount; i++) {
	    cout << "Account Number: " << accountNumbers[i]
		<< ", Account Holder: " << accountHolderNames[i]
		<< ", Balance: " << balances[i] << endl;
	}
    }
};

int main() {
    BankSystem bank;
    int choice;
    clrscr();
    while (true) {
	cout << "\nBank System Menu:\n";
	cout << "1. Create Account\n";
	cout << "2. Deposit\n";
	cout << "3. Withdraw\n";
	cout << "4. Check Balance\n";
	cout << "5. View All Accounts\n";
	cout << "6. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
	case 1:
	    bank.createAccount();
	    break;
	case 2:
	    bank.deposit();
	    break;
	case 3:
	    bank.withdraw();
	    break;
	case 4:
	    bank.checkBalance();
	    break;
	case 5:
	    bank.viewAllAccounts();
	    break;
	case 6:
	    cout << "Goodbye!" << endl;
	    getch();
	    return 0;
	default:
	    cout << "Invalid choice. Please try again." << endl;
	}
    }
    getch();
}
