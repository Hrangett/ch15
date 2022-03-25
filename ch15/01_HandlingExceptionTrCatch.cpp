#include<iostream>
using namespace std;

int main(void)
{
	int num1, num2; 
	cout << "µÎ°³ÀÇ ¼ýÀÚ ÀÔ·Â :";
	cin >> num1 >> num2;

	try
	{
		if (num2 == 0)
			throw num2;
		cout << "³ª´°¼ÀÀÇ ¸ò : " << num1 / num2 << endl;
		cout << "³ª´°¼ÀÀÇ ³ª¸ÓÁö : " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "Á¦¼ö´Â " << expn << "ÀÌ¤Ó µÉ ¼ö ¾ø½À´Ï´Ù." << endl;
	}

	cout << "²ý" << endl;

	return 0;
}