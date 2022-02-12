/*
	TODO: Sum of Digits | Problem Code: FLOW006

	 ->You're given an integer N. Write a program to calculate the sum of all the digits of N

	 -> Input:
		The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

	 -> Output :
		For each test case, calculate the sum of digits of N, and display it in a new line.

	 -> Example
		Input:
			3
			12345
			31203
			2123
		Output:
			15
			9
			8
*/

#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	while (test_case--) {
		int n;
		cin >> n;

		int rem = 0, sum = 0;

		while (n != 0){
			rem = n % 10;
			n = n / 10;

			sum = sum + rem;
		}
		cout << sum << endl;
	}
	return 0;
}