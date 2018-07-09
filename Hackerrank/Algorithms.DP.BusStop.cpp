#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    vector<ll> x(n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }
    double w, v;
    int q;
    scanf("%lf%lf%d", &w, &v, &q);
    while (q--) {
        ll p, t;
        double u;
        scanf("%lld%lld%lf", &p, &t, &u);
        int l = -1, r = n, m;
        while (r - l > 1) {
            m = (l + r) >> 1;
            (x[m] < p ? l : r) = m;
        }
        cout<<l<<"\t"<<m<<"\t"<<r<<"\n";
        double ans = INFINITY;
        for (int i : vector<int>({0, l, r, n - 1})) {
            if (0 <= i && i < n) {
                ans = min(ans, max(0.0, (t + abs(p - x[i])/u - x[i]/v)/w));
            }
        }
        printf("%.11lf\n", min(x.back()/v + w*ceil(ans), t + abs(p - x.back())/u));
    }
}
