// Q118 - Reverse Order of Words

#include <iostream>
using namespace std;

int main()
{
    string sentence, words[100];
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence += ' ';
    string temp = "";

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            temp += sentence[i];
        }
        else
        {
            words[count++] = temp;
            temp = "";
        }
    }

    cout << "Reversed Sentence: ";

    for (int i = count - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }

    return 0;
}