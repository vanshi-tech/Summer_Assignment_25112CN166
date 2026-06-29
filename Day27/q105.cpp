// Q105 - Count Digits, Alphabets and Special Characters

#include <iostream>
using namespace std;

int main()
{
    string str;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] != ' ')
            special++;
    }

    cout << "Alphabets = " << alphabets << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special;

    return 0;
}