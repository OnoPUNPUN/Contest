#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long m = k / 2;
        long long full = n / k;
        long long rem = n % k;
        long long extra = rem < m ? rem : m;
        long long ans = full * k + extra;
        cout << ans << endl;
    }
    return 0;
}