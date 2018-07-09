#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
#define mod 1000000007
#define N 400000
#define ll long long
//https://www.hackerrank.com/challenges/prime-digit-sums/problem
bool is_prime(int n) {
    if (n < 2) return false;
    for (int d = 2; d < n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}

int sumd(int n) {
    return n == 0 ? 0 : n % 10 + sumd(n / 10);
}

bool good(int n) {
    return n < 100 || is_prime(sumd(n % 1000)) && is_prime(sumd(n % 10000)) && is_prime(sumd(n % 100000)) && good(n / 10);
}

bool good5(int v) {
    return v < 100000
           && is_prime(sumd(v % 1000))
           && is_prime(sumd(v / 10 % 1000))
           && is_prime(sumd(v / 100 % 1000))
           && is_prime(sumd(v % 10000))
           && is_prime(sumd(v / 10 % 10000))
           && is_prime(sumd(v));
}

int s4[1000];
int s04[1000];
int s5a[1000];
int s5b[1000];
int s4c = 0;
int s04c = 0;
int s5c = 0;

ll results[N+1];

ll *pct = new ll[10000];
ll *ct = new ll[10000];

void add_result(int n, ll v) {
    results[n] = v;
    // printf("%d: %lld\n", n, v);
}

int main() {
    vector<int> s04v;
    for (int v = 1000; v < 10000; v++) {
        if (good(v)) {
            s04v.push_back(s4[s4c++] = v);
        }
    }

    for (int v = 0; v < 100000; v++) {
        if (good5(v)) {
            s04v.push_back(s5a[s5c] = v % 10000);
            s04v.push_back(s5b[s5c] = v / 10);
            s5c++;
        }
    }

    sort(s04v.begin(), s04v.end());
    s04v.erase(unique(s04v.begin(), s04v.end()), s04v.end());
    for (int i = 0; i < s04v.size(); i++) s04[s04c++] = s04v[i];

    add_result(1,9);
    add_result(2,90);
    add_result(3,303);
    add_result(4,s4c);

    for (int v = 0; v < s4c; v++) pct[s4[v]]++;

    for (int n = 5; n <= N; n++) {
        for (int v = 0; v < s04c; v++) {
            ct[s04[v]] = 0;
        }
        ll s = 0;
        for (int i = 0; i < s5c; i++) {
            int a = s5a[i];
            int b = pct[s5b[i]];
            if (b) {
                ct[a] += b;
                s += b;
            }
        }
        s %= mod;
        for (int v = 0; v < s04c; v++) {
            ct[s04[v]] %= mod;
        }
        add_result(n,s);
        ll *tct = ct; ct = pct; pct = tct;
    }

    int z;
    scanf("%d", &z);
    while (z--) {
        int n;
        scanf("%d", &n);
        ll ans = results[n];
        if (ans < 0) ans += mod;
        printf("%lld\n", ans);
    }
}
