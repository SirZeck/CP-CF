#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
#include<array>
 
using namespace std;

//This line is left blank intentionally

#define ll long long
#define ld long double
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define trav(a,x) for (auto& a : x)
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))

const int MOD = 1e9 + 7;
const int inf = 1e9 + 10;
const ll INF = 1e18 + 10;
const double eps = 1e-9;

void solve () {
	int n; cin >> n;
	vector<int> a(n);
	trav(i, a) cin >> i;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) continue;
			else if (a[i] >= a[j]) {
				for (int k = i + 1; k < j; k++) {
					if (a[k] > a[j]) continue;
					else if (a[k] <= a[j])
				}
			}
		}
	}

	cout << (ans == 0 ? -1 : ans) << '\n';
}

int main () {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    clock_t start, end;
    start = clock();
    int tc = 1; cin >> tc;
    while (tc--) 
    	solve ();

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cerr << "Exec Time:" << time_taken << "secs.\n";
}