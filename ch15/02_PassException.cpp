#include<iostream>
using namespace std;

void Divide(int num1, int num2)
{
	if (num2 == 0)
		throw num2;

	cout << "�������� �� : " << num1 / num2 << endl;
	cout << "�������� ������ : " << num1 % num2 << endl;
}

int main()
{
	int num1, num2;
	cout << "�� ���� ���� �Է� : ";
	cin >> num1 >> num2;

	try
	{
		Divide(num1, num2);
		cout << "�������� ����.." << endl;
	}
	catch (int e)
	{
		cout << "������ " << e << "�̤� �� �� �����ϴ�." << endl;
	}
	cout << "��";
	return 0;
}