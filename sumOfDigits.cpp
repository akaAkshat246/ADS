 #include <iostream>
 using namespace std;
int sumOfDigits(int number) {
	if (number < 10) {
		return number;
	}
	return number % 10 + sumOfDigits(number/10);
}
int main() {
	int number;
	cin>>number;
	if (number<0) {
		number=-number;
	}
	cout << "Sum of digits: "<<sumOfDigits(number)<<'\n';
    cout<<"This program is written by Akshat Vats, 2503201000145, CSE 11"<<endl;
	return 0;
}
// 
//
// Sample input: 12345
// Output: Sum of digits: 15

