#include <iostream>
using namespace std;

int main()
{
    int num, largestPrime = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 2; i <= num; i++)
    {
        // Check factor
        if(num % i == 0)
        {
            int count = 0;

            // Check prime
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                }
            }

            // If prime
            if(count == 2)
            {
                largestPrime = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}