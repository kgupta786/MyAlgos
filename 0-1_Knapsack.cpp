#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int w;
        cin >> w;

        vector<int> Wt;
        vector<int> Val;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            Val.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            Wt.push_back(a);
        }

        int knap[n + 1][w + 1];

        for (int i = 0; i <= w; i++)
        {
            knap[0][i] = 0;
        }

        for (int i = 0; i <= n; i++)
        {
            knap[i][0] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (j >= Wt[i - 1])
                {
                    knap[i][j] = max(knap[i - 1][j], knap[i - 1][j - Wt[i - 1]] + Val[i - 1]);
                }
                else
                {
                    knap[i][j] = knap[i - 1][j];
                }
            }
        }

        cout << knap[n][w] << endl;
    }
    return 0;
}