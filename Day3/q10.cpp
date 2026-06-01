#include <iostream>
using namespace std;
int main(){
    int start,end,num,i;
    cout<< "Enter the range";
    cin >> start>>end;
    for(num= start; num<=end;num++){
        if (num<=1)
            continue;
            for(i=2;i<num;i++){
                if(num%i==0)
                break;
            }
            if(i==num)
            cout<<num<<" " ;        }
    return 0;
        }
