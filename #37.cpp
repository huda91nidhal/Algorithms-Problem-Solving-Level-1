#include <iostream>
#include<string>
using namespace std;
float readnumber(string message)
{
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}
float sumnumbers()
{
    int number = 0, sum = 0; int counter = 1;

    do
    {
        number = readnumber("Please enter number " + to_string(counter));
        if (number == -99)
            break;
        sum = sum + number;
        counter++;
    } while (number != -99);
    return sum;
}
int main()
{
    cout <<endl<< "the Results is : " <<sumnumbers()<<endl;
    return 0;
}

