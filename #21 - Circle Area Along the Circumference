#include <iostream>
#include <string>
using namespace std;
float readcircumference()
{
	float l;
	cout << "please enter the circumference : " << endl;
	cin >> l;
	return l;
}
float circleareabycircumference(float l)
{
	const float pi = 3.14;
	float area;
	area = pow(l, 2) / (pi * 4);
	return area;
}
void printresult(float area)
{
	cout << "the circle area is :" << area;

}
int main()
{
	printresult(circleareabycircumference(readcircumference()));
	return 0;
}
