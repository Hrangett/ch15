#include<iostream>
#include<new>

using namespace std;
int main()
{
	int num = 0;

	try
	{
		while (1)
		{
			num++;
			cout << num << " ��° �Ҵ� �õ�" << endl;
			new int[1000][1000];
		}
	}
	catch(bad_alloc &bad)
	{
		cout << bad.what() << endl;
		cout << "xxx �Ұ� xxx" << endl;
	}

	return 0;

}