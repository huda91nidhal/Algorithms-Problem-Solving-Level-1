#include <iostream>
using namespace std;
int readtotalsales()
{
	int totalsales;
	cout << "please enter the total sales : " << endl;
	cin >> totalsales;
	return totalsales;
}
float getcomissionpercentage(float totalsales)
{
	if (totalsales >= 1000000)
		return 0.01;
	else if (totalsales >= 500000)
		return 0.02;
	else if (totalsales >= 100000)
		return 0.03;
	else if (totalsales >= 50000)
		return 0.05;
	else
		return 0.00 ;
}
float calculatetotalcomission(float totalsales)
{
	return getcomissionpercentage(totalsales) * totalsales;
}
int main()
{
	float totalsales= readtotalsales();
	cout <<endl<< "comission percentage = "<<getcomissionpercentage(totalsales)<< endl;
	cout << endl << "total comission = " <<calculatetotalcomission(totalsales) << endl;

}

