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
float totalmonth(float loanamount, float monthlyinistallment)
{
	return (float) loanamount / monthlyinistallment;
}
int main()
{
	int loanamount = readpositivenumber("please enter the loan amount ");
	int monthlyinistallment= readpositivenumber("please enter monthly in istallment ");
	cout <<endl;
	cout << "total month to pay " << totalmonth(loanamount,monthlyinistallment) << " Months to settle the loan " << endl;
	return 0;
}
