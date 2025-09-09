#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p[1000];
        int q[1000];

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            q[i] = (n + 1) - p[i];
        }

        // print q
        for (int i = 0; i < n; i++) {
            cout << q[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}