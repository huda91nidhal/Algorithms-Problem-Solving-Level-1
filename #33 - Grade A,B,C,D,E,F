#include <iostream>
using namespace std;
int readnumberinrange(int from , int to)
{
	int grade;
	do
	{ 
	cout << "Please enter A grade between 0 and 100 " << endl;
	cin >> grade;
	} while (grade < from || grade > to);
		return grade;
}
char getgradeletter(int grade)
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}
int main()
{
	cout <<endl<< "Results = " <<getgradeletter(readnumberinrange(0,100));
	
	
	return 0;
}

