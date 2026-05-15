#include <iostream>
using namespace std;
struct stpiggybankcontent
{
	int pennies, nickels, dimes, quarters, dollars;
};
stpiggybankcontent readpiggybankcontent()
{
	stpiggybankcontent piggybankcontent;
	cout << "enter the total pennies : " << endl;
	cin >> piggybankcontent.pennies;
	cout << "enter the total nickels : " << endl;
	cin >> piggybankcontent.nickels;
	cout << "enter the total dimes : " << endl;
	cin >> piggybankcontent.dimes;
	cout << "enter the total quarters : " << endl;
	cin >> piggybankcontent.quarters;
	cout << "enter the total dollars : " << endl;
	cin >> piggybankcontent.dollars;
	return piggybankcontent;
}
int calculatetotalpinnies(stpiggybankcontent piggybankcontent)
{
int totalpennies= piggybankcontent.pennies * 1 + piggybankcontent.nickels * 5 +
piggybankcontent.dimes * 10 + piggybankcontent.quarters * 25 + piggybankcontent.dollars * 100;
return totalpennies;
}

int main()
{
    int totalpennies = calculatetotalpinnies(readpiggybankcontent());
	cout <<endl<< "total pennies : " << totalpennies << endl;
	cout << "total dollars : " << float(totalpennies) / 100 << endl;
	return 0;
}
