#include <iostream>
#include <cmath>
using namespace std;
void readtringledata(float& a, float& b, float& c)
{
	cout << "please enter the tringle sida A  : " << endl;
	cin >> a;
	cout << "please enter the tringle base B  : " << endl;
	cin >> b;
	cout << "please enter the tringle side C  : " << endl;
	cin >> c;
}

float circleareabyitringle(float a, float b, float c)
{
	const float pi = 3.14;
	float p;
	p = (a + b + c) / 2;
	float t;
	t = (a * b * c) / (4 * sqrt(p * (p - b) * (p - c)));
	float area = pi * pow(t, 2);
	return area;
}
void printresult(float area)
{
	cout << "the circle area is :" << area;

}
int main()
{
	float a, b, c;

	readtringledata(a, b, c);
	printresult(circleareabyitringle(a, b, c));
	return 0;
}
