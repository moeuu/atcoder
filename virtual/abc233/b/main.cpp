#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repab(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define repr(i, n) for (ll i = (ll)(n); i >= 0; i--)
#define vsort(v) sort(v.begin(), v.end())
#define vsortr(v) sort(v.begin(), v.end(), greater<ll>{})

//定数
#define INF32 2147483647           // 2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807  // 9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007             //問題による

int main()
{
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    string s;
    cin >> s;
    for (int i = 0; i < l; i++) {
        cout << s[i];
    }
    for (int i = r; i >= l; i--) {
        cout << s[i];
    }
    for (int i = r + 1; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
}
