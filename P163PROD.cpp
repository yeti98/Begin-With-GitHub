#include<bits/stdc++.h>
using namespace std;
const int DIG = 4;
const int BASE = 10000; // BASE **3 < 2**51
const int TAM = 2048;
const double EPS = 1e-10;
inline int cmp ( double x, double y = 0, double tol = EPS ) {
return (x <= y + tol ) ? (x + tol < y) ? -1 : 0 : 1;
}
struct bigint {
	int v[ TAM ], n;
	bigint ( int x = 0): n (1) { memset (v, 0, sizeof (v)); v[n ++] = x; fix (); }
	bigint ( char *s): n (1) {
		memset (v, 0, sizeof (v));
		int sign = 1;
		while (*s && ! isdigit (*s))
			if (*s++ == '-') sign *= -1;
		char *t = strdup (s), *p = t + strlen (t);
		while (p > t) {
			*p = 0;
			p = max (t, p - DIG );
			sscanf (p, "%d", &v[n]);
			v[n ++] *= sign ;
		}
		free (t), fix ();
	}
	bigint& fix ( int m =0) {
		n = max (m, n);
		int sign = 0;
		for ( int i=1, e =0; i <= n || e && (n=i); i ++) {
			v[i] += e;
			e = v[i] / BASE ;
			v[i] %= BASE ;
			if (v[i])
			sign = (v[i] > 0) ? 1 : -1;
		}
		for ( int i = n -1; i > 0; i --)
			if (v[i] * sign < 0)	v[i] += sign * BASE , v[i +1] -= sign ;
		while (n && !v[n]) n --;
		return * this ;
	}
	int cmp ( const bigint & x =0) const {
		int i = max (n, x.n), t =0;
		while ( true )
			if ((t = ::cmp (v[i], x.v[i])) || !i --)
		return t;
	}
	bool operator <( const bigint & x) const { return cmp (x) < 0; }
	bool operator ==( const bigint & x) const { return cmp (x) == 0; }
	bool operator !=( const bigint & x) const { return cmp (x) != 0; }
	operator string () const {
		ostringstream s;
		s << v[n];
		for ( int i = n -1; i >0; i --) {
			s. width ( DIG );
			s. fill ('0');
			s << abs (v[i]);
		}
		return s. str ();
		}
	friend ostream & operator <<( ostream & o, const bigint & x) {
		return o << (string) x;
	}
	bigint & operator +=( const bigint & x) {
		for ( int i = 1; i <= x.n; i ++)	v[i] += x.v[i];
		return fix (x.n);
	}
	bigint operator +( const bigint & x) { return bigint (* this ) += x; }
	bigint & operator -=( const bigint & x) {
		for ( int i = 1; i <= x.n; i ++)	v[i] -= x.v[i];
		return fix (x.n);
	}
	bigint operator -( const bigint & x) { return bigint (* this ) -= x; }
	bigint operator -() { bigint r = 0; return r -= * this ; }
	void ams ( const bigint & x, int m, int b) { // * this += (x * m) << b;
		for (int i=1, e =0; (i <= x.n || e) && (n = i + b); i ++) {
			v[i+b] += x.v[i] * m + e;
			e = v[i+b] / BASE ;
			v[i+b] %= BASE ;
		}
	}
};
int main(){
	string a, b, c, d;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
		if(a[i]!='0') c+=a[i];
	for(int i=0;i<b.length();i++)
		if(b[i]!='0') d+=b[i];
	bigint tmpa, tmpb, res1, res2;
	tmpa=(char*) a.c_str();
	tmpb=(char*) b.c_str();
	res1=tmpa+tmpb;
	tmpa=(char*) c.c_str();
	tmpb=(char*) d.c_str();
	res2=tmpa+tmpb;
	a=res1, b=res2, c="";
	for(int i=0;i<a.length();i++)
		if(a[i]!='0') c+=a[i];
	if(c==b) cout<<"YES"; else cout<<"NO";
	return 0;
}
