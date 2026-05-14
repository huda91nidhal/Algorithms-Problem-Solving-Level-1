#include <iostream>
using namespace std;
enum enpassfail { pass = 1,fail = 2 };
int readmark()
{
	int mark;
	cout << "please enter your mark : " << endl;
	cin >> mark;
	return mark;
}

enpassfail checkmark (int mark)
{
	if (mark >= 50)
		return enpassfail::pass ;
	else
		return enpassfail::fail;
}
void printresult(int mark)
{
	if (checkmark(mark)== enpassfail::pass)
		cout << "you passed"<<endl;
	else
		cout << "you failed"<<endl;

}
int main()
{
	printresult(readmark());
	return 0;
}

