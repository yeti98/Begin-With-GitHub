#include <bits/stdc++.h>
using namespace std;
int n=5, k=3, s=-1, x[25], dem=0;
int sum=0;
void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		sum+=j;
		if(i==k){
			if(sum==s) ++dem;
		}
		else Try(i+1);
		sum-=j;
	}
}
int main(){
	while(1){
		x[0]=0; dem=0; sum=0;
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0) break;
		Try(1);
		cout<<dem<<'\n';
	}
	return 0;
}
