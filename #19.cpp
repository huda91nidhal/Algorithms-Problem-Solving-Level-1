#include <iostream>
#include <string>
using namespace std;
float readdiameter()
{
	float d;
	cout << "please enter the raduis : " << endl;
	cin >> d;
	return d;
}
float circleareabydiameter(float d)
{
	const float pi = 3.14;
	float area;
	area = (pi * pow(d, 2)) / 4;
	return area;
}
void printresult(float area)
{
	cout << "the area of the circle is :" << area;

}
int main()
{
	printresult(circleareabydiameter(readdiameter()));
	return 0;
}
