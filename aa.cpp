#include <bits/stdc++.h>
 
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define trav(a,x) for (auto& a : x)
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())

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

const int MOD = 1e9 + 7;
const int inf = 1e9 + 10;
const long INF = 1e18 + 10;

void solve () {
    long long ncats, ndogs, nlegs;
    cin >> ncats >> ndogs >> nlegs;

    long long total_dog_legs = 4 * ndogs;
    long long total_cat_legs = 4 * ncats;

    //calc min # legs req

    long long min_cat_legs_req = 0;
    long long max_cats_on_dogs = 2 * ndogs;
    if (ncats > max_cats_on_dogs) {
        min_cat_legs_req = 4 * (ncats - max_cats_on_dogs);
    }

    long long min_req_legs = total_dog_legs + min_cat_legs_req;
    long long max_req_legs = total_dog_legs + total_cat_legs;

    debug(ncats, ndogs, max_cats_on_dogs)
    debug(min_req_legs, max_req_legs, nlegs)

    if (nlegs >= min_req_legs && nlegs <= max_req_legs)
        cout << "yes\n";
    else
        cout << "no\n";

}

int main () {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int tc = 1; cin >> tc;
    while (tc--) 
        solve ();
}