#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	bool flag = true;
 
	int count = 0;
 
	cout << "素数：" << endl;
	for (int i = 101; i < 200; i++)
	{
		for (int j=2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
 
		if (flag)
		{
			count++;
			if (count % 4 == 0)
			{
				cout << "\n";
			}
			cout << "\t" << i << "\t";
 
		}
		flag = true;
	}
	cout << "\n" << "总数为:" << count;
	getchar();
	return 0;
}