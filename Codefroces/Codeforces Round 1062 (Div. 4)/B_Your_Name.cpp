/*
You were scared they were going to laugh at you, right?
So let them! People who discourage others will never find their own happiness!
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;

    cin >> q;

    while (q--)
    {
        int n;

        cin >> n;

        string s, t;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}