#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, count = 0;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}