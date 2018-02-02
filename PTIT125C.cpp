/********************************
*   Detail:	PTIT125C -nht3008 - 22.1.2018
*   Links:	http://www.spoj.com/PTIT/problems/PTIT125C/
********************************/
#include <bits/stdc++.h>
using namespace std;
#define FTI(idx, begin, end, cnt) for(int idx=(begin); idx<(end); idx+=cnt)
#define FTL(idx, begin, end, cnt) for(long idx=(begin); idx<(end); idx+=cnt)
#define FDI(idx, begin, end, cnt) for(int idx=(begin); i>=(end); idx-=cnt)
#define FDL(idx, begin, end, cnt) for(long idx=(begin); i>=(end); idx-=cnt)
#define PB(x) push_back(x)
#define MP(x, y) make_pair((x),(y))
#define EL cout<<"\n"
#define MAX 1000000
using namespace std;
int main(){
	long n, m;
	int x[MAX]={0};
    cin >> n >> m;
    FTI(i, 0, m, 1){
        int a, b;
        cin >> a >> b;
        ++x[a]; --x[b+1];
    }
    FTL(i, 1, n, 1) x[i]+=x[i-1];
    sort(x, x+n);
    cout<<x[n/2];
	return 0;
}
