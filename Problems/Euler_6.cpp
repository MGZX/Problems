/*
 2016/8/7 ZXD

Sum square difference
Problem 6

The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

int main(void)
{
	int sum_of_square = 0;
	int square_of_sum;
	for (int i = 1; i <= 100; i++)
		sum_of_square += i * i;
	square_of_sum = 5050 * 5050;
	cout << square_of_sum - sum_of_square;
	system("pause");
	return 0;
}