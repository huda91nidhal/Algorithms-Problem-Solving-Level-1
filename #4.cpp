#include <iostream>
using namespace std;
struct stinfo
{
	int age;
	bool hasdrivinglicence;
};
stinfo readinf()
{
	stinfo info;
	cout << "please enter your age :" << endl;
	cin >> info.age;
	cout << "Do you have a driver licence ? " << endl;
	cin >> info.hasdrivinglicence;
	return info;
}
bool isaccepted(stinfo info)
{
	return (info.age >= 21 && info.hasdrivinglicence == 1);
		
};
void printinfo()

int main()
{
	
	if (hire(age, driverlic))
		cout << "hired" << endl;
	else
		cout << "Rejected" << endl;
	return 0;
}

