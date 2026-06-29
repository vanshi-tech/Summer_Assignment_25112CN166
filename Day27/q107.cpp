// Q107 - Reverse Each Word of a Sentence

#include <iostream>
using namespace std;

int main()
{
    string str, word = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    str += ' ';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            word += str[i];
        }
        else
        {
            for (int j = word.length() - 1; j >= 0; j--)
                cout << word[j];

            cout << " ";
            word = "";
        }
    }

    return 0;
}