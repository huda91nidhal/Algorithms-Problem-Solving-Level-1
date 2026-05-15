#include <iostream>
using namespace std;
enum enoperationtype {add='+' , subtract='-' , multiply='*'  , divide='/' };
float readnumber(string message)
{
	float number=0;
	cout << message << endl;
	cin >> number;
	return number;
}
enoperationtype readoptype()
{
	char ot = '+';
	cout << "please enter the operation type : " << endl;
	cin >> ot;
	return (enoperationtype)ot;
}
float calculate(float number1, float number2, enoperationtype optype)
{
	switch (optype)
	{
	case enoperationtype::add:
	    return number1 + number2;
	case enoperationtype::subtract:
		return number1 - number2;
	case enoperationtype::multiply:
		return number1 * number2;
	case enoperationtype::divide:
		return number1 / number2;
	default:
		return number1 + number2;
	}
}
int main()
{
	float number1 = readnumber("please enter number 1 ");
	float number2 = readnumber("please enter number 2 ");
	enoperationtype optype = readoptype();
	cout << endl << "Results = " << calculate(number1, number2, optype) << endl;
	return 0;
}

