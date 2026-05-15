#include <iostream>
using namespace std;
enum enmonthofyear { jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, jul = 7 ,
	aug = 8 , sep = 9 ,oct = 10 , nov = 11 , des = 12 };
int readnumberinrange(string message, int from, int to)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < from || number > to);
	return number;
}
enmonthofyear readmonthofyear()
{
	return (enmonthofyear)readnumberinrange("please enter the number of month ", 1, 12);
}
string getmonthofyear(enmonthofyear month)
{
	switch (month)
	{
	case enmonthofyear::jan:
		return "januray";
	case enmonthofyear::feb:
		return "feburay";
	case enmonthofyear::mar:
		return "march";
	case enmonthofyear::apr:
		return "april";
	case enmonthofyear::may:
		return "may";
	case enmonthofyear::jun:
		return "june";
	case enmonthofyear::jul:
		return "july";
	case enmonthofyear::aug:
		return "augest";
	case enmonthofyear::sep:
		return "septemper";
	case enmonthofyear::oct:
		return "october";
	case enmonthofyear::nov:
		return "november";
	case enmonthofyear::des:
			return "december";
		default:
			return "Wrong month ";
	}
}
int main()
{
	cout << getmonthofyear(readmonthofyear()) << endl;
	return 0;
}

