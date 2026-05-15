#include <iostream>
using namespace std;
float readpositivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
float calculateremainder(float totalbill, float totalcashpaid)
{
    return totalcashpaid - totalbill;
}
int main()
{
    float totalbill = readpositivenumber("plaease enter the total bill ");
    float totalcashpaid = readpositivenumber("plaease enter the total cash paid ");
    cout << endl;
    cout << "Total bill = " << totalbill << endl;
    cout << "Total cash paid = " << totalcashpaid << endl;
    cout << "************************************************" << endl;
    cout << "Remaider = " << calculateremainder(totalbill, totalcashpaid) << endl;
    return 0;
}