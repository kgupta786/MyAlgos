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

        int fp[n + 1];

        fp[0] = 1;
        fp[1] = 1;
        
        for (int i = 2; i <= n; i++)
        {int maxi = i;
            for (int j = 1; j < i; j++)
            {
                maxi=max(maxi,fp[j]*fp[i-j]);
            }

            fp[i]=maxi;
        }

        cout<<fp[n]<<endl;
    }

    return 0;
}