#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n) {

    int original = n;
    int sum = 0;

    while(n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    if(armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}