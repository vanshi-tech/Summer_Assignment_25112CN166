// Q108 - Count Uppercase and Lowercase Letters

#include <iostream>
using namespace std;

int main()
{
    string str;
    int upper = 0, lower = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }

    cout << "Uppercase Letters = " << upper << endl;
    cout << "Lowercase Letters = " << lower;

    return 0;
}