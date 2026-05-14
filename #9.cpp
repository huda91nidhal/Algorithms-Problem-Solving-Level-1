#include <iostream>
using namespace std;
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
void printresult(int total)
{
    cout << "the sum of the 3 numbers is : " << total<<endl;
}
int main()
{
    int num1, num2, num3, sum;
    readnumbers(num1, num2, num3);
    printresult(sumof3numbers(num1, num2, num3));
    return 0;
}

