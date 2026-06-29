// Q93 - Check String Rotation

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Not Rotation";
        return 0;
    }

    string temp = str1 + str1;

    bool found = false;

    for (int i = 0; i <= temp.length() - str2.length(); i++)
    {
        int j;

        for (j = 0; j < str2.length(); j++)
        {
            if (temp[i + j] != str2[j])
                break;
        }

        if (j == str2.length())
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Strings are Rotation of each other.";
    else
        cout << "Strings are Not Rotation.";

    return 0;
}