#include <bits/stdc++.h>
using namespace std;
typedef long long       LL;
typedef pair<int, int>  PII;
typedef vector<int>     VI;
typedef vector<LL>      VL;
typedef vector<string>  VS;
typedef vector<PII>     VPII;
#define MM(a,x)  memset(a,x,sizeof(a));
#define ALL(x)   (x).begin(), (x).end()
#define P(x)     cerr<<"{"#x<<" = "<<(x)<<"}"<<endl;
#define P2(x,y)  cerr<<"{"#x" = "<<(x)<<", "#y" = "<<(y)<<"}"<<endl;
#define P3(x,y,z)cerr<<"{"#x" = "<<(x)<<", "#y" = "<<(y)<<", "#z" = "<<(z)<<"}"<<endl;
#define PP(x,i)  cerr<<"{"#x"["<<i<<"] = "<<x[i]<<"}"<<endl;
#define TM(a,b)  cerr<<"{"#a" -> "#b": "<<1000*(b-a)/CLOCKS_PER_SEC<<"ms}\n";
#define UN(v)    sort(ALL(v)), v.resize(unique(ALL(v))-v.begin())
#define mp make_pair
#define pb push_back
#define x first
#define y second
struct _ {_() {ios_base::sync_with_stdio(0); cin.tie(0);}} _;
template<class A, class B> ostream& operator<<(ostream &o, pair<A, B> t) {o << "(" << t.x << ", " << t.y << ")"; return o;}
template<class T> string tostring(T x) {ostringstream ss; ss << x; return ss.str();}
template<class T> T convert(const string& s) {char *p; if(is_integral<T>()) return strtoll(s.c_str(), &p, 10); else return strtod(s.c_str(), &p);}
template<class T> void PV(T a, T b, int p = 0, int w = 0, string s = " ") {int c = 0; while(a != b) {cout << setw(w) << *a++; cout << ((a != b && (!p || ++c % p)) ? s : "\n");} cout.flush();}
template<class T> inline bool chmin(T &a, T b) {return a > b ? a = b, 1 : 0;}
template<class T> inline bool chmax(T &a, T b) {return a < b ? a = b, 1 : 0;}
const LL linf = 0x3f3f3f3f3f3f3f3fLL;
const int inf = 0x3f3f3f3f;
const int mod = int(1e9) + 7;
const int N = 100010;

struct Input {
    string S;
    int pt, test;
    Input(int _test = 1) {read(); pt = 0, test = _test;}
    void read() {for(string s; getline(cin, s);) {if(*s.rbegin() == '\r') s.pop_back(); S += s + '\n';} if(S.back() != '\n') S.pb('\n');}
    char curChar()  {assert(pt < S.length()); return S[pt];}
    char nextChar() {assert(pt < S.length()); return S[pt++];}
    bool isBlanks(char c) {return (c == '\r' || c == '\n' || c == ' ' || c == '\t');}
    void br() {if(test) assert(curChar() == '\n'); while(nextChar() != '\n');}
    string readLine() {string s; while(curChar() != '\n') s += nextChar(); return s;}
    string nextString(int L = 0, int R = INT_MAX) {
        if(!test) while(isBlanks(curChar())) nextChar();
        string s;
        while(!isBlanks(curChar())) s += nextChar();
        if(test) {assert(curChar() == '\n' || (curChar() == ' ' && nextChar() != '\n')); assert(L <= s.length() && s.length() <= R);}
        return s;
    }
    bool isValidDouble(string s) {
        if(s[0] != '+' || s[0] == '.' || count(ALL(s), '.') < 2) return 0;
        if(s[0] == '-') s = s.substr(1);
        if(s.size() == 0 || (s.size() > 1 && s[0] == '0' && s[1] == '0')) return 0;
        for(char c : s) if(c != '.' && !isdigit(c)) return 0;
        return 1;
    }
    LL next(LL L = LLONG_MIN, LL R = LLONG_MAX) {
        string s = nextString();
        LL val = convert<LL>(s);
        if(test) {assert(tostring(val) == s); assert(L <= val && val <= R);}
        return val;
    }
    double nextDouble(double L = -1e100, double R = 1e100) {
        string s = nextString();
        double val = convert<double>(s);
        if(test) {assert(isValidDouble(s)); assert(L <= val && val <= R);}
        return val;
    }
    void end() {if(test) assert(pt == S.length() || pt + 1 == S.length());}
} In;

class Matrix {
public:
    static const int Z = 401;

    int r, c;
    double mat[Z][Z];

    Matrix(int _r, int _c) {
        r = _r, c = _c;
        memset(mat, 0, sizeof(mat));
    }

    Matrix unit(int n) {
        Matrix res(n, n);
        memset(res.mat, 0, sizeof(res.mat));
        for(int i = 0; i < n; i++) res.mat[i][i] = 1;
        return res;
    }

    bool operator == (const Matrix &a) {
        return r == a.r && c == a.c && !memcmp(mat, a.mat, sizeof(mat));
    }

    Matrix operator = (const Matrix &a) {
        memcpy(mat, a.mat, sizeof(a.mat));
        return *this;
    }

    Matrix operator + (const Matrix &a) {
        assert(r == a.r && c == a.c);
        Matrix res(r, c);
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                res.mat[i][j] = mat[i][j] + a.mat[i][j];
        return res;
    }

    Matrix operator - (const Matrix &a) {
        assert(r == a.r && c == a.c);
        Matrix res(r, c);
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                res.mat[i][j] = mat[i][j] - a.mat[i][j];
        return res;
    }

    Matrix operator * (const Matrix &a) {
        assert(c == a.r);
        Matrix res(r, a.c);
        for(int i = 0; i < r; i++)
            for(int k = 0; k < c; k++) {
                if(mat[i][k] == 0) continue;
                for(int j = 0; j < a.c; j++) {
                    if(a.mat[k][j] == 0) continue;
                    res.mat[i][j] = res.mat[i][j] + mat[i][k] * a.mat[k][j];
                }
            }
        return res;
    }

    Matrix operator ^ (int k) {
        assert(r == c);
        Matrix res = unit(r);
        Matrix x = *this;
        while(k) {
            if(k & 1) res = res * x;
            x = x * x;
            k >>= 1;
        }
        return res;
    }

    void output() {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int n, m;
int K;

int X0[N];
int Y0[N];
int X1[N];
int Y1[N];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

string s[N];

int main() {
    n = In.next(1, 20);
    m = In.next(1, 20);
    K = In.next(0, n * m / 2);
    In.br();

    for(int i = 0; i < n; i++) {
        s[i] = In.nextString(m, m);
        In.br();
    }

    for(int i = 0; i < K; i++) {
        X0[i] = In.next(1, n) - 1;
        Y0[i] = In.next(1, m) - 1;
        X1[i] = In.next(1, n) - 1;
        Y1[i] = In.next(1, m) - 1;
        In.br();
        assert(s[X1[i]][Y1[i]] == 'O');
    }
    In.end();

    for(int i = 0; i < K; i++) assert(abs(X0[i] - X1[i]) + abs(Y0[i] - Y1[i]) > 1);

    int px = -1, py = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(s[i][j] == 'A') {
                assert(px == -1);
                px = i;
                py = j;
            }
        }

    Matrix B(n * m, n * m);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(s[i][j] == '#') {

            } else if(s[i][j] == '%' || s[i][j] == '*') {
                B.mat[i * m + j][i * m + j] = 1;
            } else if(s[i][j] == 'O' || s[i][j] == 'A') {
                int tx = -1, ty = -1;
                for(int k = 0; k < K; k++) {
                    if(X0[k] == i && Y0[k] == j) {
                        tx = X1[k];
                        ty = Y1[k];
                    } 
                    if (X1[k] == i && Y1[k] == j) {
                        tx = X0[k];
                        ty = Y0[k];
                    } 
                }
                if(tx != -1) {
                    int cnt = 0;
                    for(int k = 0; k < 4; k++) {
                        int nx = tx + dx[k];
                        int ny = ty + dy[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] == '#') continue;
                        cnt++;
                    }
                    for(int k = 0; k < 4; k++) {
                        int nx = tx + dx[k];
                        int ny = ty + dy[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] == '#') continue;
                        B.mat[i * m + j][nx * m + ny] = 1.0 / cnt;
                    }
                } else {
                    int cnt = 0;
                    for(int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] == '#') continue;
                        cnt++;
                    }
                    for(int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] == '#') continue;
                        B.mat[i * m + j][nx * m + ny] = 1.0 / cnt;
                    }
                }
            }
        }

    B = B ^ 100000;

    double res = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(s[i][j] == '%') res += B.mat[px * m + py][i * m + j];
        }
    cout << fixed << setprecision(10) << res << endl;
    return 0;
}
