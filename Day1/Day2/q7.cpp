#include <iostream>
using namespace std;
int main(){
    int n, product=1;
    cout <<"Enter a number :";
    cin >> n;
    int temp=n;
    while(temp !=0){
        int digit=temp%10;
        product= product*digit;
        temp = temp/10;
    }
cout<<"product of "<< n << "=" << product << endl;
return 0;
}