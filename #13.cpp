#include <iostream>
using namespace std;
void readnumbers(int& num1, int& num2,int& num3)
{
    cout << "plase enter number 1 : " << endl;
    cin >> num1;
    cout << "plase enter number 2 : " << endl;
    cin >> num2;
    cout << "plase enter number 3 : " << endl;
    cin >> num3;
}
int maxof3numbers(int num1, int num2,int num3)
{
        if (num1 > num2 )
        if (num1 > num3)
        return num1;
        else return num3;
        else if (num2 > num3)
        return num2;
        else
        return num3;
}
void printresult(int max)
{
    cout << "the maximum number is " << max << endl;
}
int main()
{
    int num1, num2,num3;
    readnumbers(num1, num2,num3);
    printresult(maxof3numbers(num1, num2,num3));

}

