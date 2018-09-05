#include <bits/stdc++.h>
using namespace std;
long long a[2000002]; //give a point to limits
long long MOD=1e9+7;
long long n; 
long long minCost(){
	priority_queue<long long, vector<long long>, greater<long long> > pq(a+1,a+n+1);
//	cout<<pq.size()<<"\n";
	long long res=0;
	while(pq.size()>1){
		long long fi=pq.top(); pq.pop();
		long long se=pq.top(); pq.pop();
		long long tmp=(fi+se)%MOD;
		res=(res+tmp)%MOD;
		pq.push(tmp); //push (fi+se)%MOD
	}
	return res%MOD;
}
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++) cin>>a[i]; //type of i must be long , not int
	long long ans = minCost();
	cout<<ans;
	return 0;
}
