#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter number:\n";
	cin >> num;
	cout << "=====\n";
	(num % 2 == 0) ? cout << num << " is even\n" : cout << num << " is not even\n";
	return 0;
}