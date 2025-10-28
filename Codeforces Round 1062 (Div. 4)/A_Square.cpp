/*
... back then the sky seemed so vast.

And now the sky above me... is low, and narrow, and heavy.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a == b) && (b == c) && (c == d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}