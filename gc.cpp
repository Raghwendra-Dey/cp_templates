#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fr(iter,n)  for(int iter=0;iter<n;++iter)
#define frr(iter,s,e) for(int iter=s;iter<e;++iter)
#define rfrr(iter,s,e)  for(int iter=s;iter>=e;--iter)
#define watch(x) cerr << (#x) << " is " << (x) << endl;
#define pb push_back
#define pf push_front
#define mpr make_pair
#define in insert
#define umap unordered_map
#define uset unordered_set
#define vin(v, n) vi v(n); fr(i, n) cin >> v[i];
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define prv(a) for(auto x : a) cout << x << ' ';cout << '\n';
#define debv(a) for(auto x : a) cerr << x << ' ';cerr << '\n';
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(0);\
		cin.tie(0);cout.tie(0);
#define int long long
#define uint unsigned long long
#define yon(fg) cout << (fg?"YES":"NO") << endl;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
int INF = 0x7FFFFFFFFFFFFFFF;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__);

void gcp_out() { cout << endl; }
template<typename Head, typename... Tail> void gcp_out(Head H, Tail... T) { cout << ' ' << H; gcp_out(T...); }
#define gcp(...) _ct++; cout << "Case #" << _ct << ": ", gcp_out(__VA_ARGS__);

void ree() {}
template<typename First, typename ...Rest>
void ree(First& first, Rest&... rest) {
    cin >> first;
    ree(rest...);
}
#define re(...) int __VA_ARGS__; ree(__VA_ARGS__);


int binPow(int a, int b, int mod=1) {
	int res = 1;
	a=a%mod;
	while (b > 0) {
		if (b & 1)
			res = (res * a)%mod;
		a = (a * a)%mod;
		b >>= 1;
	}
	return res;
}

int _ct=0;

void solve()
{
	
}

signed main()
{
	fastio

	re(_t) while(_t--)
	{
		solve();
	}
}
