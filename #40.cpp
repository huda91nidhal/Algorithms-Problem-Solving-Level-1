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
float totalbillafterserviceandtax(float totalbill)
{
    totalbill = totalbill * 1.1;
    return totalbill = totalbill * 1.16;

}
int main()
{
    float totalbill = readpositivenumber("plaease enter the total bill ");
    cout << endl;
    cout << "Total bill = " << totalbill << endl;
    cout << "************************************************" << endl;
    cout << "total bill after service and tax = " << totalbillafterserviceandtax(totalbill) << endl;
    return 0;
}