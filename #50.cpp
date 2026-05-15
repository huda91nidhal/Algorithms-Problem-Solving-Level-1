#include <iostream>
using namespace std;
string readpincode()
{
    string pincode;
    cout << "please enter pin code" << endl;
    cin >> pincode;
    return pincode;
}
bool login()
{
    string pincode;
    int counter = 3;
    do
    {
        counter--;
        pincode = readpincode();
        if (pincode == "1234")
            return 1;
        else
        {
            cout << "wrong pin , you have " <<counter<<" more tries"<< endl;
            system("color 4f");
        }

    } while (counter >=1 && pincode !="1234");
    return 0;
}
int main()
{
    if (login())
    {
        system("color 2f");
        cout << "\n your account balance is "<< 7.500 << endl;
    }
    else
        cout <<endl<<"your card block call the bank for help " << endl;
    return 0;
}

