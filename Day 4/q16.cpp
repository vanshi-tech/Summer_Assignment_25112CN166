#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start,end,num;
    cout<<"Enter start and end: ";
    cin>>start>>end;
    for(num=start;num<=end;num++){
    int temp=num,count=0,sum=0,digit;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        sum+=pow(digit,count);
    temp/=10;
    }
    if(sum==num)
    cout<<num<<" ";
}
return 0;
}