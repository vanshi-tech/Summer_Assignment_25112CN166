#include <iostream>
using namespace std;
int main(){
   int n,n1=0,n2=1,next,i;
   cout<<"enter the number of term:";
   cin>>n;
   for(i=1;i<=n;i++){
    cout<<n1<<" ";
    next=n1+n2;
    n1=n2;
    n2=next; 
} 
return 0;
}