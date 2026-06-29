// Q87 - Character Frequency

#include <iostream>
using namespace std;

int main()
{
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to search: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    cout << "Frequency of '" << ch << "' = " << count;

    return 0;
}