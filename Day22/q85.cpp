// Q85 - Check Palindrome String

#include <iostream>
using namespace std;

int main()
{
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    getline(cin, str);

    int length = 0;
    while (str[length] != '\0')
        length++;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}