#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define fastio()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define pp pop_back
#define F first
#define S second
#define all(x) x.begin(), x.end()

const ll MOD = 1000000007;
ll mod(ll n, ll m = MOD)
{
    n %= m, n += m, n %= m;
    return n;
}

const int MAXN = 1e9 + 5;
const ll INF = 1e14;

void test_cases()
{
    ll n , m;
    cin >> n >> m;
    ll c = 0;

    for(ll i = n; i<=m; i++){
        string s = to_string(i);
        bool ok = false;
        for(ll j = 0; j<s.size(); j++){
            if(j%2 == 0){
                if((s[j] - '0') % 2 != 0){
                    ok = true;
                }else{
                    ok = false;
                    break;
                }
            }
            else if(j%2 != 0){
                if((s[j] - '0') % 2 == 0){
                    ok = true;
                }else{
                    ok = false;
                    break;
                }
            }
        }
        
        if(ok){
            c++;
        }
    }

    cout << c << endl;
}

int main()
{
    fastio();
    ll x = 0;
    // int t = 1;
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        cout << "Case #" << ++x << ": ";
        test_cases();
    }
    // cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
