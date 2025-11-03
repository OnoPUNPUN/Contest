#include <iostream>
using namespace std;

int numStudent(int n, int m)
{
    return m > n ? 0 : n - m;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << numStudent(n, m) << endl;
    }
}