#include <iostream>
using namespace std;

int main()
{
    int num, temp, rem, fact, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while(temp > 0)
    {
        rem = temp % 10;
        fact = 1;
        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if(sum == num)
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not Strong Number";
    }

    return 0;
}
