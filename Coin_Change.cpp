#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int m;
        cin >> m;

        vector<int> arr;

        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        int k;
        cin >> k;

        int cp[m + 1][k + 1];

        cp[0][0] = 1;
        for (int i = 1; i <= k; i++)
        {
            cp[0][i] = 0;
        }

        for (int i = 1; i <= m; i++)
        {
            cp[i][0] = 1;
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (j >= arr[i - 1])
                {
                    cp[i][j] = cp[i - 1][j] + cp[i - 1][j - arr[i - 1]];
                }
                else
                {
                    cp[i][j] = cp[i - 1][j];
                }
            }
        }

        cout << cp[m][k] << endl;
    }

    return 0;
}