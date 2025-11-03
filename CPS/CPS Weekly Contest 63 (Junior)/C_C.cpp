#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int sum = 0;
        int ans = 0;
        for (int i = 1; i <= N; ++i)
        {
            int a;
            cin >> a;
            sum += a;
            if (sum == i)
                ++ans;
        }
        cout << ans << '\n';
    }
    return 0;
}