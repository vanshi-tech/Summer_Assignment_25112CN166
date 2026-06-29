// Q92 - Find Maximum Occurring Character

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    int max = 0;
    char ch;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i]] > max)
        {
            max = count[str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum Occurring Character = " << ch << endl;
    cout << "Frequency = " << max;

    return 0;
}