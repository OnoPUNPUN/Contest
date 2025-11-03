#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int z = 0;
        int o = 0;
        char pre = '#';

        for (char c : s)
        {
            if (c != pre)
            {
                if (c != pre)
                {
                    if (c == '0')
                        z++;
                    else
                        o++;
                    pre = c;
                }
            }
        }
        cout << min(z, o) << endl;
    }
    return 0;
}
