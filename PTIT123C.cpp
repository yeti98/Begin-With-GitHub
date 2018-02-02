#include <bits/stdc++.h>
using namespace std;
#define FTI(idx, begin, end, cnt) for(int idx=(begin); idx<(end); idx+=cnt)
#define FTL(idx, begin, end, cnt) for(long idx=(begin); idx<(end); idx+=cnt)
#define FDI(idx, begin, end, cnt) for(int idx=(begin); i>=(end); idx-=cnt)
#define FDL(idx, begin, end, cnt) for(long idx=(begin); i>=(end); idx-=cnt)
#define PB(x) push_back(x);
#define EL cout<<"\n";
#define MAX 1000000
using namespace std;
struct stock{
	long cost;
	long day;
};
int cmp(stock a, stock b){
	if(a.cost>b.cost) return 0;
	else if(a.cost==b.cost){
		if(a.day>b.day) return 0;	
	}
	return 1;
}
int cmp1(stock a, stock b){
	if(a.day>b.day) return 0;
	return 1;
}
int cmp2(stock a, stock b){
	if(a.day<b.day) return 1;
	return 0;
}
int main(){
	stock st[100];
	long n, k1, k2;
	int test=1;
	while(1){
		cin>>n>>k1>>k2;
		if(n==0) break;
		FTL(i, 0, n, 1) {
			cin>>st[i].cost;
			st[i].day=i+1;
		}
		sort(st, st+n, cmp);
		sort(st, st+k1, cmp1);
		sort(st+n-k2, st+n, cmp2);
		cout<<"Case "<<test; EL
		FTL(i,0, k1, 1) cout<<st[i].day<<" "; EL
		FDL(i, n-1, n-k2, 1) cout<<st[i].day<<" "; EL
		test++;
	}
	return 0;
}

