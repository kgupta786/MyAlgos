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
        int maxi = INT_MIN;
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vc.push_back(a);
        }

        if (n == 1)
        {
            cout << vc[0] << endl;
        }
        else if (n == 2)
        {
            cout << max(vc[0], vc[1]) << endl;
        }
        else if (n == 3)
        {
            vc[2] = vc[2] + vc[0];
            cout << max(vc[2], vc[1]) << endl;
        }
        else
        {
            for (int i = 4; i <= n; i++)
            {
                vc[i - 1] = max(vc[i - 3], vc[i - 4]) + vc[i - 1];
                maxi = max(vc[i - 1], maxi);
            }

            cout << maxi << endl;
        }
    }

    return 0;
}