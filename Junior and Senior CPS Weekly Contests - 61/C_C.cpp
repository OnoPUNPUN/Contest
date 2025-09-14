#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int odd = (n + 1) / 2;
        int even = n / 2;
        int total = (odd * b) + (even * a);
        cout << total << endl;
    }
    return 0;
}