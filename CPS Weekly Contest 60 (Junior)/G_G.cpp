#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;

        int total = 24 * 60;
        int c = h * 60 + m;
        int r = total - c;

        cout << r << endl;
    }
    return 0;
}
