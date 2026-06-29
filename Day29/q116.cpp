// Q 116 - Case Insensitive String Comparison
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "Strings are Not Equal";
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;

        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] += 32;
    }

    if (str1 == str2)
        cout << "Strings are Equal (Case-Insensitive)";
    else
        cout << "Strings are Not Equal";

    return 0;
}