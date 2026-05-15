#include <iostream>
using namespace std;
int readnumber()
{
	int number;
	cout << "please enter the number : " << endl;
	cin >> number;
	return number;
}

void printrangefrom1ton_usingwhile (int n)
{

	int counter = 0;
	cout << "Range printed using while statement : \n ";
	while (counter < n)
	{
		counter++;
		cout << counter << endl;
	}
}
void printrangefrom1ton_usingdowhile(int n)
{
	int counter = 0;
	cout << "Range printed using do...while statement : \n ";
	do
	{
		counter++;
		cout << counter << endl;
	} while (counter < n);
}
void printrangefrom1ton_usingforstatement(int n)
{
	
	cout << "Range printed using for statement : \n ";
	for (int counter = 1; counter <= n; counter++)
    cout << counter << endl;
}
int main()
{
	int n;
	n=readnumber();
	printrangefrom1ton_usingwhile(n);
	printrangefrom1ton_usingdowhile(n);
	printrangefrom1ton_usingforstatement(n);
	return 0;
}
