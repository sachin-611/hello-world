#include<bits/stdc++.h>
using namespace std;

#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
#define watch3(x,y,z) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<" and "<<(#z)<<" is "<<(z)<<"\n"

#define ll long long
#define ff first
#define ss second
#define null NULL
#define all(c) (c).begin(),(c).end()
#define nl "\n"

#define ld long double
#define eb emplace_back
#define pb push_back
#define pf push_front
#define mod 1000000007

typedef vector<ll> vl;
typedef vector< vl > vvl;
typedef pair< ll, ll> pll;
typedef map< ll, ll> mll;


int main() {

	// Use ctrl+shift+b ( second option )
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt" , "w" , stderr);
#endif

	ll t;
	cin >> t;

	while (t--) {

		ll n, x;
		cin >> n >> x;

		if (n == 1 || n == 2) {
			cout << "1" << nl;
		} else {
			n = n - 2;
			ll ans = ceil((n * 1.0) / x) + 1;
			cout << ans << nl;
		}



	}


	return 0;
}
