#include<iostream>
using namespace std;
float readpositivenumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
float hourstodays(float numberohours)
{
	return (float)numberohours / 24;
}
float hourstoweeks(float numberofhours)
{
	return (float)numberofhours / 24 / 7 ;
}
float daystoweek(float numberofdays)
{
	return (float)numberofdays / 7;

}
int main()
{
	float numberofhours = readpositivenumber("Please enter number of hours ");
	float numberofdays = hourstodays(numberofhours);
	float numberofweeks = daystoweek(numberofdays);
	cout << endl;
	cout << "total hours = " << numberofhours << endl;
	cout << "total days = " << numberofdays << endl;
	cout << "total weeks = " << hourstoweeks(numberofhours) << endl;
}