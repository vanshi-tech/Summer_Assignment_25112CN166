// Q110 - Replace a Character

#include <iostream>
using namespace std;

int main()
{
    string str;
    char oldChar, newChar;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to replace: ";
    cin >> oldChar;

    cout << "Enter new character: ";
    cin >> newChar;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldChar)
            str[i] = newChar;
    }

    cout << "Updated String = " << str;

    return 0;
}