/*
…If we see shooting stars, what would you wish for, Punpun?
Wishing upon shooting stars doesn’t make them come true.
Right, but what if. What would you wish if they did…?
I’d wish for shooting stars to disappear forever
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((c >= a) && (d < b))
    {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}