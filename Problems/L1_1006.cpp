/*
 2016/8/3 ZXD

 1006. 换个格式输出整数 (15)

 让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

 输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

 输出格式：每个测试用例的输出占一行，用规定的格式输出n。

 输入样例1：
 234
 输出样例1：
 BBSSS1234
 输入样例2：
 23
 输出样例2：
 SS123
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n_i;
	cin >> n_i;
	int temp = n_i;
	int digit_G = temp % 10;
	temp /= 10;
	int digit_S = temp % 10;
	temp /= 10;
	int digit_B = temp;
	for (int i = 0; i < digit_B; i++)
		cout << 'B';
	for (int i = 0; i < digit_S; i++)
		cout << 'S';
	for (int i = 1; i <= digit_G; i++)
		cout << i;
	cout << endl;
	cin.get();
	cin.get();
	return 0;
}
