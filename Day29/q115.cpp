// Q115 - Print Duplicate Characters

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    cout << "Duplicate Characters:\n";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] > 1)
        {
            cout << str[i] << endl;
            freq[(int)str[i]] = 0;
        }
    }

    return 0;
}