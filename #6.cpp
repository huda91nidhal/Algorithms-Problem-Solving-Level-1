#include <iostream>
using namespace std;
struct stinfo
{
    string firstname;
    string lastname;
};
stinfo readinfo()
{
    stinfo info;
    cout << "please enter your first name : " << endl;
    cin >> info.firstname;
    cout << "please enter your last name : " << endl;
    cin >> info.lastname;
    return info;
}
string getfullname(stinfo info , bool reversed)
{
    string fullname = " ";
    if (reversed)
    fullname = info.lastname + " " + info.firstname;
    else 
        fullname = info.firstname + " " + info.lastname;

    return fullname;
}
void printfullname(string fullname)
{
    cout << "Your fullname is " << fullname << endl;
}
int main()
{
    printfullname(getfullname(readinfo(),true));
    return 0;


}
