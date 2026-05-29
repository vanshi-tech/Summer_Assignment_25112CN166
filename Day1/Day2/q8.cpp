#include <iostream>
using namespace std;
int main(){
    int n, rev =0;
    cout<<"Enter a number:";
    cin >>n;
    int original=n;
    int  temp=n;
    while(temp !=0){
        int digit=temp%10;
        rev= rev*10 + digit;
    temp = temp/10;
    }
if (rev == original)
    cout << "n is pallindrome" << endl;
    else cout << "n is not a pallindrome" << endl;
    return 0;
}
