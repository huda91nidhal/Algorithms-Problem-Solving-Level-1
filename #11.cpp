#include <iostream>
using namespace std;
enum enpassfail {pass=1,fail=2};
void readnumbers(int& num1, int& num2, int& num3)
{
    cout << "please enter number 1 : " << endl;
    cin >> num1;
    cout << "please enter number 2 : " << endl;
    cin >> num2;
    cout << "please enter number 3 : " << endl;
    cin >> num3;

}
int sumof3numbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
float calculateaverage(int num1, int num2, int num3)
{
    return (float)sumof3numbers(num1, num2, num3) / 3;
}
enpassfail checkaverage(float average)
{
    if (average >= 50)
    return enpassfail::pass;
    else
        return enpassfail::fail;
}
void printresult(float average)
{
    cout << "your average is : " << average << endl;
    if (checkaverage(average)== enpassfail::pass)
        cout << "you passed" << endl;
    else
        cout << "you failed" << endl;
}
int main()
{
    int num1, num2, num3, sum;
    readnumbers(num1, num2, num3);
    printresult(calculateaverage(num1, num2, num3));
    return 0;
}

