#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position " << i + 1;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found";

    return 0;
}
