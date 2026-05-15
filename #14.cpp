#include <iostream>
using namespace std;
void readnumbers(int& num1, int& num2)
{
	cout << "please enter number 1 : " << endl;
	cin >> num1;
	cout << "please enter number 2 : " << endl;
	cin >> num2;
}


void swapnumbers(int &num1, int &num2)
{
	int swap;
	swap = num1;
	num1 = num2;
	num2 = swap;
}
void printresults(int num1,int num2)
{
	cout << "your first number is : " << num1 << endl;
	cout << "your second number is : " << num2 << endl;
}
int main()
{
	int num1, num2;
	readnumbers(num1, num2);
	printresults(num1, num2);
	swapnumbers(num1, num2);
	printresults(num1, num2);
	return 0;
}
