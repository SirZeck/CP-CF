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
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "----------\n", cerr << "[" << #x << "] = ["; _print(x) , cerr << "----------\n";
#else
#define debug(x...)
#endif

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
	long long n; cin >> n;
	vector<string> ans(2 * n + 1);
	ans[1] = "A";
	ans[2] = "AB";

	for (int i = 3; i < 2 * n; i+=2) {
		ans[i] = ans[i - 1] + "A";
		ans[i + 1] = ans[(i / 2) + 1] + "B";
	}

	cout << ans.size() << '\n';
	trav(i, ans) cout << i << '\n';

	//cout << ans[n / 2] + "B" << '\n';
}

int main () {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    clock_t start, end;
    start = clock();
    int tc = 1; //cin >> tc;
    while (tc--) 
    	solve ();

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cerr << "Exec Time:" << time_taken << "secs.\n";
}