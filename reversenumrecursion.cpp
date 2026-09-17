#include <iostream>
using namespace std;
int reverseNumber(int number, int reversed = 0) {
	if (number == 0) {
		return reversed;
	}

	return reverseNumber(number / 10, reversed * 10 + number % 10);
}
int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	int sign = number < 0 ? -1 : 1;
	number = number < 0 ? -number : number;

	cout << "Reversed number: " << sign * reverseNumber(number) << endl;
	cout << "This program is written by Akshat Vats, 2503201000145, CSE 11" << endl;
	return 0;
}

// Sample output for input 12345:
// Enter a number: 12345
// Reversed number: 54321
// This program is written by Akshat Vats, 2503201000145, CSE 11
