#include <iostream>
#include <cmath>
using namespace std;
int main(){
int num,temp,digit,count=0;
int sum=0;
cout <<"Enter a number: ";
cin>>num;
temp=num;
while(temp!=0){
    count++;
    temp/=10;
}
temp=num;
while(temp!=0){
    digit =temp%10;
    sum+=pow(digit,count);
    temp/=10;
}
if (sum == num)
cout<<"Armstrong Number";
else
cout<<"not a armstrong no.";
return 0;
}