#include <bits/stdc++.h>
using namespace std;
int n, k, dem, sum;
float tb;
bool kt(){
	tb=(float) sum/n;
	if(tb-(int)tb>=0.5) tb++;
	if((int) tb==k) return true;
	return false;
}
int main(){
	dem=sum=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int tmp; cin>>tmp;
		sum+=tmp;
	}
	while(!kt()){
		sum+=k; ++dem; ++n;
	}
	cout<<dem;
	return 0;
}

