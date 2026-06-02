#include <iostream>
using namespace std;
int main(){
    int n,n1=0,n2=1,next,i;
    cout<<"Enter position:";
    cin>>n;
    if(n==1)
    cout<<n1;
    else if(n==2)
    cout<<n2;
    else{
        for(i=3;i<=n;i++){
            next=n1+n2;
            n1=n2;
            n2=next;
        }
        cout<<"Nth term of fibonacci series="<<n2;
    }
return 0;
}