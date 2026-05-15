#include <iostream>
using namespace std;
void readnumbers(float& height, float& wedith)
{
	cout << "please enter the height " << endl;
	cin >> height;
	cout << "please enter the wedith " << endl;
	cin >> wedith;
}
float calculatingrectanglearea(float height , float wedith)
{
return height * wedith;
}
void printresults(float area)
{
	cout << "the area of rectangle is : " << area << endl;
}
int main()
{
	float height, wedith;
	readnumbers(height, wedith);
	printresults(calculatingrectanglearea(height,wedith));
	return 0;
}

