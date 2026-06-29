// Q103 - Concatenate Two Strings

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1 += str2[i];
    }

    cout << "Concatenated String = " << str1;

    return 0;
}