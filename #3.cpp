#include <iostream>
using namespace std;
enum ennumbertype {odd=1 , even=0};

int readnumber()
{
	int number;
	cout << "please the number " << endl;
	cin>>number;
	return number;
}
ennumbertype checknumbertype(int num)
{
	int result = num % 2;
	if (result == 0)
		return ennumbertype::even;
	else
		return ennumbertype::odd;
}
void printnumber(ennumbertype numbertype)
{
	if (numbertype == ennumbertype::even)

	cout << "\n the number is even " <<endl;
	else 
		cout << "\n the number is odd " << endl;
}
int main()
{
	printnumber(checknumbertype(readnumber()));
	return 0;
}
