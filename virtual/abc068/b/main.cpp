#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 1; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<ll>{})
#define vsum(v) accumulate(v.begin(), v.end(), 0)

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             //問題による

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = 1;
    ll max_2 = 0;

    for (int i = 1; i <= n; i++) {
        int temp_c = 0;
        int temp = i;
        while (temp % 2 == 0) {
            temp /= 2;
            temp_c++;
        }

        if (temp_c > max_2) {
            max_2 = temp_c;
            ans = i;
        }
    }

    cout << ans << endl;
}
