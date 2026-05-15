#include <iostream>
using namespace std;
enum endayofweek { sat = 1, sun = 2, mon = 3, tue = 4, wed = 5, thu = 6, fri = 7 };
int readnumberinrange(string message , int from , int to)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < from || number > to);
	return number;
}
endayofweek readdayofweek()
{
	return (endayofweek)readnumberinrange("please enter the number of day ",1,7);
}
string getdayofweek(endayofweek day)
{
	switch (day)
	{
	case endayofweek::sat :
		return "saturday";
	case endayofweek::sun:
		return "Sunday";
	case endayofweek::mon:
		return "monday";
	case endayofweek::tue:
		return "tuesday";
	case endayofweek::wed:
		return "wednsday";
	case endayofweek::thu:
		return "thursday";
	case endayofweek::fri:
		return "friday";
	default:
		return "Wrong day ";
	}
}
int main()
{
	cout << getdayofweek(readdayofweek()) << endl;
	return 0;
}

