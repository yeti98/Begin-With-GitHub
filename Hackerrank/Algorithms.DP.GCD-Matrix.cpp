#include <bits/stdc++.h>
// #include "testlib.h"  
using namespace std ;
//https://www.hackerrank.com/challenges/gcd-matrix/problem
#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()

#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define plii pair<pair<ll, int>, int>
#define piii pair<pii, int>
#define viii vector<pair<pii, int> >
#define vl vector<ll>
#define vll vector<pair<ll,ll> >
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define mp make_pair
#define ms(x, v) memset(x, v, sizeof x)

#define sc1(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)

#define scll1(x) scanf("%lld",&x)
#define scll2(x,y) scanf("%lld%lld",&x,&y)
#define scll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)

#define pr1(x) printf("%d\n",x)
#define pr2(x,y) printf("%d %d\n",x,y)
#define pr3(x,y,z) printf("%d %d %d\n",x,y,z)

#define prll1(x) printf("%lld\n",x)
#define prll2(x,y) printf("%lld %lld\n",x,y)
#define prll3(x,y,z) printf("%lld %lld %lld\n",x,y,z)

#define pr_vec(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;

#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)

#define fr(i, a, b) for(i=a; i<=b; i++)
#define fb(i, a, b) for(i=a; i>=b; i--)
#define ASST(x, l, r) assert( x <= r && x >= l )

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

const int mod = 1e9 + 7;

int ADD(int a, int b, int m = mod) {
    int s = a;
    s += b;
    if( s >= m )
      s -= m;
    return s;
}

int MUL(int a, int b, int m = mod) {
    return (1LL * a * b % m);
}

int power(int a, int b, int m = mod) {
    int res = 1;
    while( b ) {
        if( b & 1 ) {
            res = 1LL * res * a % m;
        }
        a = 1LL * a * a % m;
        b /= 2;
    }
    return res;
}

ll nC2(ll x) {
    return ( x * ( x - 1 ) / 2 );
}

const int maxn = 1e5 + 5;

int A[maxn], B[maxn];
ll d[maxn];
int a[maxn], b[maxn];
int n, m, q;
void reset() {
	int i; fr(i, 1, maxn-1) {
		a[i] = b[i] = d[i] = 0;
	} 
}

void solve() {
	reset();
	int i, w, x, y, z;
	cin >> w >> x >> y >> z; w++; x++; y++; z++;
	assert(1 <= w && w <= n);
	assert(1 <= y && y <= n);
	assert(w <= y && x <= z);
	assert(1 <= x && x <= m);
	assert(1 <= z && z <= m);
	fr(i, w, y) a[A[i]] ++;
	fr(i, x, z) b[B[i]] ++;
	fr(i, 1, maxn-5) {
		int j = i, v1 = 0, v2 = 0;
		while( j <= maxn-5 ) {
			v1 += a[j];
			v2 += b[j];	
			j += i;
		} 
		a[i] = v1; b[i] = v2;
	}

	int cnt = 0;
	fb(i, maxn-5, 1) {
		int j = i; ll ans = 0;
		ans = 1LL * a[i] * b[i];
		while(j <= maxn-5) {
			ans -= d[j];
			j += i;
		}
		d[i] = ans;
		if( d[i] ) cnt ++;
	}
	cout << cnt << "\n";
}
int main() {
	cin >> n >> m >> q;
	assert(1 <= n && n <= 100000);
	assert(1 <= m && m <= 100000);
	assert(q <= 10 && q >= 1);
	int i; 
	fr(i, 1, n) {
		cin >> A[i];
		assert(A[i] <= 100000 && A[i] >= 1);
	}
	fr(i, 1, m) {
		cin >> B[i];
		assert(B[i] <= 100000 && B[i] >= 1);
	}
	while( q-- ) solve();
	return 0;
}
