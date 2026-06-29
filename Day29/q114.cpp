// Q114 - Remove All Vowels

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing vowels: ";

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        {
            cout << ch;
        }
    }

    return 0;
}