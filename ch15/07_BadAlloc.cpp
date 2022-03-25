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
			cout << num << " 번째 할당 시도" << endl;
			new int[1000][1000];
		}
	}
	catch(bad_alloc &bad)
	{
		cout << bad.what() << endl;
		cout << "xxx 불가 xxx" << endl;
	}

	return 0;

}