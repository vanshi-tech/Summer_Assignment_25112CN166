// Q120 - Check Palindrome Sentence

#include <iostream>
using namespace std;

int main()
{
    string sentence, temp = "";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Remove spaces
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
            temp += sentence[i];
    }

    bool palindrome = true;
    int n = temp.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (temp[i] != temp[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome Sentence";
    else
        cout << "Not a Palindrome Sentence";

    return 0;
}