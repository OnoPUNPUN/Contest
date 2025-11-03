/*
You were scared they were going to laugh at you, right? So let them! 
People who discourage others will never find their own happiness!
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> grid(N);
    for (int i = 0; i < N; i++)
    {
        cin >> grid[i];
    }

    set<vector<string>> patterns;

    for (int i = 0; i <= N - M; i++)
    {
        for (int j = 0; j <= N - M; j++)
        {
            vector<string> subgrid;
            for (int row = i; row < i + M; row++)
            {
                string subrow = "";
                for (int col = j; col < j + M; col++)
                {
                    subrow += grid[row][col];
                }
                subgrid.push_back(subrow);
            }
            patterns.insert(subgrid);
        }
    }

    cout << patterns.size() << endl;

    return 0;
}