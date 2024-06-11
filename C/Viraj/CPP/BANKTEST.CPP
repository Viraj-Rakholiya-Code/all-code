#include<iostream.h>
#include<conio.h>

class bank
{
    char name[20];
    int AccountNumber, value, openingBal, withdrawalAmount, CheckAccount, DepositAmount;

public:
    void display()
    {
	cout << "Account Opening  :: 1" << endl;
	cout << "Withdrawal Amount :: 2" << endl;
	cout << "Deposit Amount    :: 3" << endl;
	cout << "Check Balance     :: 4" << endl;
	cout << "Exit              :: 5" << endl;
	cout << "****************************************************" << endl;
	cout << "PRESS NUMBER ::";
	cin >> value;
	cout << "****************************************************" << endl;


	switch (value)
	{

	case 1:
	    AccountOpen();
	    break;

	case 2:
	    withdrawal();
	    break;

	case 3:
	    deposit();
	    break;

	case 4:
	    checkBal();
	    break;

	case 5:
	    break;

	default:
	    cout << "Invalid Operator" << endl;
	}
	main();
    }

    void AccountOpen()
    {   clrscr();
	cout << "Enter Your Name :: ";
	cin.ignore(1);
	cin.getline(name, 20);
	cout << "Generate Your Account Number :: ";
	cin >> AccountNumber;
	CheckAccount = AccountNumber;
	cout << "Enter Account Opening Balance :: ";
	cin >> openingBal;
	cout << "****************************************************" << endl;
	display();
    }


    void withdrawal()
    {   clrscr();
	cout << "Enter Your Withdrawal Amount ::";
	cin >> withdrawalAmount;
	cout << "Enter Your Account Number :: ";
	cin >> CheckAccount;
	if (AccountNumber == CheckAccount)
	{
	    openingBal -= withdrawalAmount;
	    cout << "Withdrawal Successful !" << endl;
	}
	else
	{
	    cout << "Account Number Invalid !" << endl;
	}
	cout << "****************************************************" << endl;
	display();
    }

    void deposit()
    {   clrscr();
	cout << "Enter Your Deposit Amount :: ";
	cin >> DepositAmount;
	openingBal += DepositAmount;
	cout << "Deposit Successful!" << endl;
	cout << "****************************************************" << endl;
	display();
    }

    void checkBal()
    {   clrscr();
	cout << "Your Current Balance :: " << openingBal << endl;
    }

      void DisplayName()
     {
	cout<<"Name ::"<<name;
    }
};

int main()
{
    bank obj;
    int task;
    clrscr();
    cout<<"Open New Account PRESS 1 :: "<<endl;
    cout<<"My Accounts PRESS 2      :: "<<endl;
    cin>>task;

    switch(task)
    {
	case 1:
	obj.display();
	break;


	case 2:
	obj.DisplayName();
    }

    getch();
    return 0;
}
