#include<iostream>
using namespace std;
int main()
{
	long f1;
	long f2;
	f1 = f2 = 1;
	for (int i = 1; i <= 20; i++)
	{
		cout << "\t"<<f1 <<"\t"<< f2;
		if (i % 2 == 0)
		{
			cout << "\n" ;
		}
		f1 = f2 + f1;
		f2 = f1 + f2;
	}
	getchar();
	return 0;
}