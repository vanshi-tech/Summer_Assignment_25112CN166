// Q101 - Copy One String to Another

#include <iostream>
using namespace std;

int main()
{
    string str1, str2 = "";

    cout << "Enter a string: ";
    getline(cin, str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str2 += str1[i];
    }

    cout << "Copied String = " << str2;

    return 0;
}