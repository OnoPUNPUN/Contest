#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = n + 2*(n/2) + 2*(n/3);
        cout << a << endl;
    }
    return 0;
}