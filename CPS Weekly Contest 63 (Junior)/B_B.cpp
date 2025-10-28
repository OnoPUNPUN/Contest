#include <iostream>

using namespace std;

string canGo(int x, int y)
{
    int totalDis = y * 2;
    int passed = 0;

    while (x--)
    {
        passed += 15;
        if (passed >= totalDis)
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        cout << canGo(x, y) << endl;
    }
}