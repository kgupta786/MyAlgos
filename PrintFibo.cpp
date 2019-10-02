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

        vector<long long int> fibo(n + 1);
        fibo[0] = 0;
        fibo[1] = 1;
        fibo[2] = 1;

        for (int i = 3; i <= n; i++)
        {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }

        for (int i = 1; i <= n; i++)
        {
            cout << fibo[i] << " ";
        }
        cout << endl;

        /* code */
    }

    return 0;
}