#include <iostream>
using namespace std;

int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << maximum(a, b);

    return 0;
}