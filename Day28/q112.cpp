// Q112 - Check String Contains Only Digits

#include <iostream>
using namespace std;

int main()
{
    string str;
    bool digitsOnly = true;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            digitsOnly = false;
            break;
        }
    }

    if (digitsOnly)
        cout << "String contains only digits.";
    else
        cout << "String contains other characters also.";

    return 0;
}