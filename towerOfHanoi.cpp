#include <iostream>
using namespace std;
void towerOfHanoi(int disks, char source, char auxiliary, char destination) {
	if (disks == 1) {
		cout << "Move disk 1 from " << source << " to " << destination << '\n';
		return;
	}
	towerOfHanoi(disks - 1, source, destination, auxiliary);
	cout << "Move disk " << disks << " from " << source << " to " << destination << '\n';
	towerOfHanoi(disks - 1, auxiliary, source, destination);
}
int main() {
	int disks;
	cout << "Enter the number of disks: ";
	cin >> disks;
	if (disks <= 0) {
		cout << "Number of disks must be positive.\n";
		return 1;
	}
	towerOfHanoi(disks, 'A', 'B', 'C');
    cout<<"This program was written by Akshat Vats, 2503201000145, CSE 11"<<endl;
	return 0;
}
// 
//
// Sample output for input 3:
// Enter the number of disks: 3
// Move disk 1 from A to C
// Move disk 2 from A to B
// Move disk 1 from C to B
// Move disk 3 from A to C
// Move disk 1 from B to A
// Move disk 2 from B to C
// Move disk 1 from A to C
