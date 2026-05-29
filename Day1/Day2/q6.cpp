#include <iostream>
using namespace std;
int main(){
    int n, rev=0;
    cout<<"Enter a number: ";
  cin >> n;
  int temp=n;
  while( temp !=0){
    int digit= temp%10;
    rev= rev*10 + digit;
    temp=temp/10;
  } 
  cout<< "Reverse of "<< n << "=" << rev << endl;
  return 0;
}