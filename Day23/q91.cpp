// Q91 - Check Anagram Strings

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    bool anagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}