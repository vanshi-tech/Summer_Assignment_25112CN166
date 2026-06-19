#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    vector<int> a(n1);

    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cin >> n2;

    vector<int> b(n2);

    for(int i = 0; i < n2; i++)
        cin >> b[i];

    cout << "Merged Array: ";

    for(int x : a) cout << x << " ";
    for(int x : b) cout << x << " ";

    return 0;
}