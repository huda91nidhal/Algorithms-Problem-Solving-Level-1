#include <iostream>
#include <cmath>
using namespace std;
void readtringledata(float& a, float& b)
{
	cout << "please enter the tringle sida A  : " << endl;
	cin >> a;
	cout << "please enter the tringle base B  : " << endl;
	cin >> b;
}
float circleareabyitringle(float a, float b)
{
	const float pi = 3.14;
	float area;
	area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return area;
}
void printresult(float area)
{
	cout << "the circle area is :" << area;

}
int main()
{
	float a, b;

	readtringledata(a, b);
	printresult(circleareabyitringle(a, b));
	return 0;
}
