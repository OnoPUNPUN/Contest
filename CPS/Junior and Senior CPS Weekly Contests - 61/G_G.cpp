#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int t = a + b + c + n;

        if(t % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int target = t / 3;

        int check = max({a, b, c});

        if (target >= check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}