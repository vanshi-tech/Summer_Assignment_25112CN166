// Q117 - Count Occurrences of a Word

#include <iostream>
using namespace std;

int main()
{
    string sentence, word, temp = "";
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the word to search: ";
    cin >> word;

    sentence += ' ';

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            temp += sentence[i];
        }
        else
        {
            if (temp == word)
                count++;

            temp = "";
        }
    }

    cout << "Occurrences = " << count;

    return 0;
}