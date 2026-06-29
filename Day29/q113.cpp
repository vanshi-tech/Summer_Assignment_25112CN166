// Q113 - Frequency of Each Character

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    cout << "\nCharacter Frequencies:\n";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] != 0)
        {
            cout << str[i] << " = " << freq[(int)str[i]] << endl;
            freq[(int)str[i]] = 0; // avoid duplicate printing
        }
    }

    return 0;
}