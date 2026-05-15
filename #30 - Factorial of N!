#include <iostream>
#include<string>
using namespace std;
int readpositivenumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);

	return number;
}
int factorial(int n)
{
	int f = 1;
	for (int counter = n; counter >= 1; counter--)
	{
		f = f * counter;
	}
	return f;
}
int main()
{

	cout << factorial(readpositivenumber("Enter N ? ")) << endl;

	return 0;

}
