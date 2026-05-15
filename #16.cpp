#include <iostream>
#include <string>
using namespace std;
void readnumbers(float& a, float& d)
{
	cout << "please enter the value of a : " << endl;
	cin >> a;
	cout << "please enter the value of d : " << endl;
	cin >> d;

}
float regtangleareabysideanddiagnal(float a, float d)
{
	float area = a * sqrt(pow(d, 2) - pow(a, 2));
	return area;
}
void printresult(float area)
{
	cout << "the area of the regtangle is :" << area;

}
int main()
{
	float a, d;
	readnumbers(a, d);
	printresult(regtangleareabysideanddiagnal(a, d));
	return 0;
}

