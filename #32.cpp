#include<iostream>
using namespace std;
int readnumber()
{
	int number;
	cout << "please enter the number ? " << endl;
	cin >> number;
	return number;
}
int readpower()
{
	int number;
	cout << "please enter the power ? " << endl;
	cin >> number;
	return number;
}
int powerofm(int number, int m)
{
	if (m == 0)
	{ 
		return 1;
	}
	int p = 1;
	for (int i = 1; i <= m; i++)
		p = p * number;
	return p;

}
int main()
{
	cout<<endl<<"results = "<<powerofm(readnumber(), readpower())<<endl;
	return 0;
}