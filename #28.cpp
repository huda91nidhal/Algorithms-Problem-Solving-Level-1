#include <iostream>
#include<string>
using namespace std;
enum enoddoreven { odd = 1, even = 2 };
int readnumbers()
{
	int number;
	cout << "please enter the number : " << endl;
	cin >> number;
	return number;
}
enoddoreven checkoddoreven(int number)
{
	if (number % 2 == 0)
		return enoddoreven::odd;
	else
		return enoddoreven::even;
}
int sumoddnumbersfrom1ton_usingwhile(int n)
{
	int counter = 0;
	int sum = 0;
	cout << "sum odd numbers using while statement : " << endl;
	while (counter < n)
	{
		counter++;
		if (checkoddoreven(counter) == enoddoreven::odd)
		{
			sum = sum + counter;
		}

	}
	return sum;
}
int sumoddnumbersfrom1ton_usindogwhile(int n)
{
	int counter = 0;
	int sum = 0;
	cout << "sum odd numbers using do ... while statement : " << endl;
	do
	{
		counter++;
		if (checkoddoreven(counter) == enoddoreven::odd)
		{
			sum = sum + counter;
		}

	} while (counter < n);
	return sum;
}
int sumoddnumbersfrom1ton_forstatement(int n)
{
	int sum = 0;
	cout << "sum odd numbers using for statement : " << endl;
	for (int counter = 1; counter <= n; counter++)
	{
		if (checkoddoreven(counter) == enoddoreven::odd)
		{
			sum = sum + counter;
		}
	}
	return sum;
}
int main()
{
	int n;
	n = readnumbers();
	cout << sumoddnumbersfrom1ton_usingwhile(n) << endl;
	cout << sumoddnumbersfrom1ton_usindogwhile(n) << endl;
	cout << sumoddnumbersfrom1ton_forstatement(n) << endl;
	return 0;

}
