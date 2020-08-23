#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 1000000
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int main()
{
    int tt;
    cin >> tt;
    for (int t = 1; t <= tt; t++)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 1;
        int d = INT_MAX, l = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] != d)
            {
                l = 2;
                d = a[i] - a[i - 1];
            }
            else
            {
                l++;
            }
            ans = max(ans, l);
        }

        cout << "Case #" << t << ": " << ans << endl;
    }
    return 0;
}