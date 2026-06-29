// Q111 - Find Smallest Word

#include <iostream>
using namespace std;

int main()
{
    string str, word = "", smallest = "";

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
            if (smallest == "" || word.length() < smallest.length())
                smallest = word;

            word = "";
        }
    }

    cout << "Smallest Word = " << smallest;

    return 0;
}