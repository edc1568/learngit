#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	int count = 0;
	cout << "水仙花数为：" << endl;
	for (int i = 100; i < 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			count++;
			if (count % 5 == 0)
			{
				cout << "\n";
			}
			cout << "\t" << i << "\t";
		}
	}
	cout << "总数为：" << count;
	getchar();
	return 0;
}#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	int count = 0;
	cout << "水仙花数为：" << endl;
	for (int i = 100; i < 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			count++;
			if (count % 5 == 0)
			{
				cout << "\n";
			}
			cout << "\t" << i << "\t";
		}
	}
	cout << "总数为：" << count;
	getchar();
	return 0;
}