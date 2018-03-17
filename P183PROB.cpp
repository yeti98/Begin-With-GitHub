#include <bits/stdc++.h>
using namespace std;
struct hang{
	int ban, mua, t1, t2, kq;
};
int cmp(hang a, hang b){
	return a.kq>b.kq;
}
int main(){
	int n, f;
	hang a[100005];
	cin>>n>>f;
	for(int i=1;i<=n;i++){
		cin>>a[i].ban>>a[i].mua;
		if(a[i].ban>a[i].mua){
			a[i].t1=a[i].t2=a[i].mua;
			a[i].kq=0;
		}
		else{
			a[i].t1=a[i].ban;
			a[i].t2=(a[i].ban*2>a[i].mua)? a[i].mua : a[i].ban*2;
			a[i].kq=abs(a[i].t1-a[i].t2);
		}
	}
	sort(a+1, a+n+1, cmp);
	long long ans=0;
	for(int i=1;i<=f;i++)	ans+=a[i].t2;
	for(int i=f+1;i<=n;i++) ans+=(a[i].ban<a[i].mua)? a[i].ban : a[i].mua;
	cout<<ans;
	return 0;
}
