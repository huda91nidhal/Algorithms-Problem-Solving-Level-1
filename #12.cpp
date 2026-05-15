#include <iostream>
using namespace std;
void readnumbers(int& num1,int& num2)
{
    cout << "plase enter number 1 : " << endl;
    cin >> num1;
    cout << "plase enter number 2 : " << endl;
    cin >> num2;
}
int maxof2numbers(int num1,int num2)
{
    int max;
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void printresult(int max)
{
    cout << "the maximum number is " <<max<< endl;
}
int main()
{
    int num1, num2;
    readnumbers(num1, num2);
    printresult(maxof2numbers(num1,num2));
    
}

