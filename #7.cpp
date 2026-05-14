#include <iostream>
#include <string>
using namespace std;
int readnumber()
{
    int num;
    cout << "please enter the number " << endl;
    cin >> num;
    return num;
}
float calculatehalfnum(int num)
{
    return float(num) / 2;
}
void printresult(int num)
{
    string result = "half of" + to_string(num) + " is " + to_string(calculatehalfnum(num));
    cout << result << endl;
}
int main()
{
    printresult(readnumber());
    return 0;
}

