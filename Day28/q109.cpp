// Q109 - Count Words, Characters and Lines

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int words = 1, characters = 0, lines = 1;

    if (str.length() == 0)
    {
        words = 0;
        lines = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        characters++;

        if (str[i] == ' ')
            words++;

        if (str[i] == '\n')
            lines++;
    }

    cout << "Characters = " << characters << endl;
    cout << "Words = " << words << endl;
    cout << "Lines = " << lines << endl;

    return 0;
}