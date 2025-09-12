#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int odd_episodes = (n + 1) / 2;
        int even_episodes = n / 2;
        int total_duration = (odd_episodes * b) + (even_episodes * a);
        cout << total_duration << endl;
    }
    return 0;
}