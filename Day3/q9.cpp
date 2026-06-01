#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number:";
    cin >> n;
    if (n<=1){
        cout <<"not prime";
        return 0;
    }
for(i=2;i<n;i++){
    if(n%i==0){
        cout<<"not prime";
    return 0;    
    }
}
cout<<"prime";
return 0;
}