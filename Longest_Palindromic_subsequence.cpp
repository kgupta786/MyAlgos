#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s1;
        cin >> s1;

        int n = s1.size();

        vector<vector<int>> vp(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i < n; i++)
        {
            vp[i][i] = 1;
        }

        for (int cl = 2; cl <= n; cl++)
        {
            for (int i = 1; i <= n - cl + 1; i++)
            {
                int j = i + cl;

                if (s1[i - 1] == s1[j - 1] and cl == 2)
                {
                    vp[i][j] = 2;
                }
                else if (s1[i - 1] == s1[j - 1])
                {
                    vp[i][j] = vp[i + 1][j - 1];
                }
                else
                {
                    vp[i][j] = max(vp[i + 1][j], vp[i + 1][j]);
                }
            }
        }
    }
}