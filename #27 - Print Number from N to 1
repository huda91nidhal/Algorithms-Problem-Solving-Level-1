#include <iostream>
using namespace std;
int readnumber()
{
	int number;
	cout << "please enter the number : " << endl;
	cin >> number;
	return number;
}

void printrangefromnto1_usingwhile(int n)
{

	int counter = n+1;
	cout << "Range printed using while statement : \n ";
	while (counter >1)
	{
		counter--;
		cout << counter << endl;
	}
}
void printrangefromnto1_usingdowhile(int n)
{
	int counter = n+1;
	cout << "Range printed using do...while statement : \n ";
	do
	{
		counter--;
		cout << counter << endl;
	} while (counter > 1);
}
void printrangefromnto1_usingforstatement(int n)
{

	cout << "Range printed using for statement : \n ";
	for (int counter = n; counter>=1; counter--)
		cout << counter << endl;
}
int main()
{
	int n;
	n = readnumber();
	printrangefromnto1_usingwhile(n);
	printrangefromnto1_usingdowhile(n);
	printrangefromnto1_usingforstatement(n);
	return 0;
}
