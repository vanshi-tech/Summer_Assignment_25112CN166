// Q119 - Find Longest and Shortest Word

#include <iostream>
using namespace std;

int main()
{
    string sentence, word = "";
    string longest = "", shortest = "";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence += ' ';

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            word += sentence[i];
        }
        else
        {
            if (longest == "" || word.length() > longest.length())
                longest = word;

            if (shortest == "" || word.length() < shortest.length())
                shortest = word;

            word = "";
        }
    }

    cout << "Longest Word = " << longest << endl;
    cout << "Shortest Word = " << shortest;

    return 0;
}