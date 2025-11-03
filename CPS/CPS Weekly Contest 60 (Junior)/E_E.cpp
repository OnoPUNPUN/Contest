#include <iostream>
using namespace std;
using namespace std;
typedef long long LL;
const int N = 2e5 + 5e2;

void solve() {
    LL A, M, L, R;
    cin >> A >> M >> L >> R;
    L -= A, R -= A;
    LL ans = 0;
    if (L < 0 && R < 0) {
        L = -L, R = -R;
        swap(L, R);
    }
    if (L >= 0) {
        ans = R / M - L / M;
        if (L % M == 0) ans++;
    } else {
        ans = R / M + (-L) / M + 1;
    }
    cout << ans << endl;
}

int main() {
    int Case = 1;
    while (Case--) {
        solve();
    }
    return 0;
}