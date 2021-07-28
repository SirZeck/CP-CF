// 30 -> 1/3 * 30 -> 10
// n1 + 2*n2 = n

// 1000 -> 1/3 * 1000 -> 333
// 333 + 2*334 = 1000

// 1 -> 1/3 * 1 -> 1

#include <bits/stdc++.h>
 
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define trav(a,x) for (auto& a : x)
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())

const int MOD = 1e9 + 7;
const int inf = 1e9 + 10;
const long long INF = 1e18 + 10;

void solve () {
    int n; cin >> n;
    int n1 = n / 3, n2 = n / 3;
    if (n1 + 2*n2 != n) {
        if ((n1 + 1) + (2*n2) != n) {
            cout << n1 << ' ' << n2 + 1 << '\n';
        } else {
            cout << n1 + 1 << ' ' << n2 << '\n';
        }
    } else {
        cout << n1 << ' ' << n2 << '\n';
    }
}

int main () {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int tc = 1; cin >> tc;
    while (tc--) 
        solve ();
}