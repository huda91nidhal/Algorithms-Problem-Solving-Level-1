#include <iostream>
#include <cmath>
using namespace std;
int readage()
{
	int age;
	cout << "please enter your age  : " << endl;
	cin >> age;
	return age;
}

bool validatenumberinrange(int number, int from, int to)
{

	return (number >= from && number <= to);
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
	printresult(readage());
	return 0;
}
