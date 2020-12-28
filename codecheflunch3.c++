#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long int
#define rep(i,n) for(ll i = 0; i < n; i++)
#define repp(i, x) for(ll i = 1; i < x; i++)
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;

ll answer(ll x, ll y) {
    ll a = x, b = y;
    ll ta = x, tb = y;
    while(tb) {
        a *= 2;
        tb >>= 1;
    }
    while(ta) {
        b *= 2;
        ta >>= 1;
    }
    a += y;
    b += x;
    return (a - b);
}
void solve() {
    ll n; cin >> n;
    vl a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll count = 0;
    rep(i, n){
        rep(j, n){
            count = max(count, answer(a[i], a[j]));
        }
    }
    cout<<count<<"\n";
    return;
}

int main() {
    ll t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}