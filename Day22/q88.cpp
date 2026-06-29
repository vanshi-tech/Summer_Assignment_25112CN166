// Q88 - Remove Spaces from String

#include <iostream>
using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
            result += str[i];
    }

    cout << "String without spaces: " << result;

    return 0;
}