#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vvvvll = vector<vvvll>;
using pll = pair<ll, ll>;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define all(v) v.begin(), v.end()
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<ll>{})
#define vsum(v) accumulate(v.begin(), v.end(), 0)

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll H, W, h, w;
    cin >> H >> W >> h >> w;

    cout << (H - h) * (W - w) << endl;
}
