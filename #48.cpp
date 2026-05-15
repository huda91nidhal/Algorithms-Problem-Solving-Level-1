#include <iostream>
using namespace std;
float readpositivenumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
float monthlyinstallment(float loanamount, float howmanymonths)
{
	return (float)loanamount / howmanymonths;
}
int main()
{
	int loanamount = readpositivenumber("please enter the loan amount ");
	int howmanymonths = readpositivenumber("how many months ");
	cout << endl;
	cout << "monthly installment = " << monthlyinstallment(loanamount, howmanymonths) << endl;
	return 0;
}
