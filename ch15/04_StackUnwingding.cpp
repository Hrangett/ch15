#include <iostream>
using namespace std;

void SimpleFuncOne();
void SimpleFuncTwo();
void SimpleFuncThree();

int main(void)
{
	try
	{
		SimpleFuncOne();
	}
	catch (int e)
	{
		cout << "예외코드 : " << e << endl;
	}
	return 0;
}

void SimpleFuncOne()
{
	cout<<"SimpleFuncOne()"<<endl;
	SimpleFuncTwo();
	cout << "SimpleFuncOne() end.." << endl << endl;
}
void SimpleFuncTwo()
{
	cout << "SimpleFuncTwo()" << endl;
	SimpleFuncThree();
	cout << "SimpleFunctow() end.." << endl;
}

void SimpleFuncThree()
{
	cout << "SimpleFuncThree()" << endl;
	throw - 1;
	cout << "SimpleFuncThree() end..." << endl;

}