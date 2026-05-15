#include <iostream>
#include <cmath>
using namespace std;
int readage()
{
	int age;
	cout << "please enter age between 18 and 45  : " << endl;
	cin >> age;
	return age;
}

bool validatenumberinrange(int number, int from, int to)
{

	return (number >= from && number <= to);
}
int readunitlagebetween(int from, int to)
{
	int age = 0;
	do {
		age = readage();
	} while (!validatenumberinrange(age, from, to));
	return age;
}
void printresult(int age)
{
	if (validatenumberinrange(age, 18, 45))
		cout << age << " is a valid age " << endl;
	else
		cout << age << " is a invalid age " << endl;
}
int main()
{
	printresult(readunitlagebetween(18, 45));
	return 0;
}
