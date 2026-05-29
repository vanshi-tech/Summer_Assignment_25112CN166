#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp=n;
    while(temp!=0){
        int digit= temp%10;
        sum= sum + digit ;
        temp = temp/10;
    }
    cout<<"sum of the digits " << n <<"="<< sum<< endl;
}