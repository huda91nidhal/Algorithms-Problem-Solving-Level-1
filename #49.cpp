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
    do
    {
        pincode = readpincode();
        if (pincode == "1234")
            return 1;
        else
        {
            cout << "wrong pin" << endl;
            system("color 4f");
        }

    } while (pincode != "1234");
    return 0;
}
int main()
{
    if (login())
    {
        system("color 2f");
        cout << "\n your account balance is 7.500 " << endl;
    }
    return 0;
}

