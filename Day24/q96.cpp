// Q96 - Remove Duplicate Characters

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    cout << "String after removing duplicates: ";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] == 0)
        {
            cout << str[i];
            freq[str[i]]++;
        }
    }

    return 0;
}