#include <iostream>
#include <queue>
#include <algorithm>
//Time: C++: 0,68 C:0,26
struct diam{ 
	long w, val;
};
int cmp_diam(diam a, diam b){
	return a.w < b.w;
}
int n, k;
diam ar[300003];
long bag[300003];
std::priority_queue<long> q;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++) scanf("%ld%ld",&ar[i].w,&ar[i].val);
	for(int i=1;i<=k;i++) scanf("%ld",&bag[i]);
	std::sort(ar+1,ar+1+n,cmp_diam);
	std::sort(bag+1, bag+1+k);
	int j=1;
	long long ans=0;
	for(int i=1;i<=k;i++){
		while(j<=n && ar[j].w <= bag[i]){
			q.push(ar[j].val);
			j++;	
		}
		if(q.size()>0){
			ans+=q.top(); q.pop();
		}
	}
	printf("%lld",ans);
	return 0;
}

