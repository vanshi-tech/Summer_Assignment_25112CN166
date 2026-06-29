
#include <iostream>
using namespace std;

int main()
{
    string str;
    int words = 1;

    cout << "Enter a sentence: ";
    getline(cin, str);

    if (str.length() == 0)
    {
        cout << "Number of Words = 0";
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            words++;
    }

    cout << "Number of Words = " << words;

    return 0;
}