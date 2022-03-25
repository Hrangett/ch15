#include<iostream>
#include<cstring>
using namespace std;

class DespositException
{
private:
	int reqDep;

public:
	DespositException(int money)
	{}
	void ShowExeptionReason()
	{
		cout << "[���� �޼��� : �ܾ� " << reqDep << " �� �Ա� �Ұ�! ]" << endl;
	}
};

class WithdrawException
{
private:
	int balance;	//	�ܰ�

public:
	WithdrawException(int money) : balance(money)
	{}

	void ShowExceptionReason()
	{
		cout << "[���� �޼��� -> �ܾ� ���� :: " << balance << ".. ]" << endl;
	}
};

class Account
{
private:
	char accNum[50];
	int balance;

public:
	Account(const char* acc, int money) :balance(money)
	{
		strcpy(accNum, acc);
	}
	void Deposit(int money) throw (DespositException)
	{
		if (money < 0)
		{
			DespositException expn(money);
			throw expn;
		} 
		balance += money;
	}
	void Withdraw(int money)throw(WithdrawException)
	{
		if (money < 0)
		{
			throw WithdrawException (balance);
		}
		balance -= money;
	}
	void ShowMyMoney()
	{
		cout << "�ܰ� : " << balance << endl << endl;
	}

};

int main()
{
	Account myAcc("56789-827120", 5000);

	try
	{
		myAcc.Deposit(2000);
		myAcc.Withdraw(-200);
	}
	catch (DespositException &expn)
	{
		expn.ShowExeptionReason();
	}
	myAcc.ShowMyMoney();

	try
	{
		myAcc.Withdraw(3500);
		myAcc.Deposit(4500);
	}
	catch (WithdrawException &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
}