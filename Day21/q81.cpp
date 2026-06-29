// Q81 - Find String Length without strlen()

#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int length=0;

    while(str[length]!='\0')
        length++;

    cout<<"Length = "<<length;

    return 0;
}