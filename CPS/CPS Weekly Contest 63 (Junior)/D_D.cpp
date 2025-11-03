#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c = 0, d = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        c += a;
        d += b;
    }
    if (c > d)
    {
        cout << "Takahashi" << endl;
    }
    else if (c == d)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
    return 0;
}