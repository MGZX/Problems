/*
 2016/8/7 ZXD
 
 Special Pythagorean triplet
 Problem 9
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	for (a = 1; a < 1000; a++)
	{
		for (b = 1; b < 1000; b++)
		{
			if (2000*(a + b) == 1000000 + 2 * a * b)
			{
				cout << a << ' ' << b << ' ' << 1000 - a - b << ' ' << a * b * (1000 - a - b) << endl;
			}
		}
	}
	system("pause");
	return 0;
}