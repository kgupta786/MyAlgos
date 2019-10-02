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

        vector<int> vc;
        vector<int> dc;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vc.push_back(a);
        }
        dc = vc;
        for (int i = 0; i < n; i++)
        {
            // cout << dc[i] << " ";
        }

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (vc[j] < vc[i])
                {
                    dc[i] = max(vc[i], vc[i] + dc[j]);
                }
            }

            maxi = max(dc[i], maxi);
            // cout << dc[i] << " ";
        }

        cout << maxi << endl;
    }
    return 0;
}