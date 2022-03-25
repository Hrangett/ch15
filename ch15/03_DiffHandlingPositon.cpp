#include <iostream>
#include<cstring>
#include<cmath>

using namespace std;

int StoI(char* str)
{
	int len = strlen(str);
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i]>'9')
			throw str[i];

		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
	}
	return num;
}

int main()
{
	char str1[100];
	char str2[200];

	while (1)
	{
		cout << "�� ���� ���� �Է� :";
		cin >> str1 >> str2;

		try
		{
			cout << str1 << " + " << str2 << "=" << StoI(str1) + StoI(str2) << endl;
			break;
		}
		catch (char e)
		{
			cout << "���� " << e << "�� �ԷµǾ����Ϥ���" << endl;
			cout << "���Է� ���.." << endl << endl;
		}
	}
	cout << "E N D";
	
}