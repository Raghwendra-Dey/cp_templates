#include <bits/stdc++.h>
#define endl "\n"
#define fr(iter,n)  for(ll iter=0;iter<n;++iter)
#define frr(iter,s,e) for(ll iter=s;iter<e;++iter)
#define rfrr(iter,s,e)  for(ll iter=s;iter>=e;--iter)
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
#define sz(x) (long long int)(x).size()
#define prv(a) for(auto x : a) cout << x << ' ';cout << '\n';
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(0);\
		cin.tie(0);cout.tie(0);

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef pair<ll, ii> iii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
ll INF = 0x7FFFFFFFFFFFFFFF;

ll binpow(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

int main()
{
	fastio

	ll T, count=0;
	cin >> T;

	while(T--)
	{
		

		count++;
		cout << "Case #" << count << ": ";
	}
}
