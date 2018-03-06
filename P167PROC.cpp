#include <bits/stdc++.h>
using namespace std;
int unused[15]={0}, x[15];
int n, smin, cost;
string a[15];
int count(string a, string b){
	int fa[26]={0};
	int fb[26]={0};
	int cnt=0;
	for(int i=0;i<a.length();i++) ++fa[a[i]-'A'];
	for(int i=0;i<b.length();i++) ++fb[b[i]-'A'];
	for(int i=0; i<26;i++)
		if(fa[i] && fb[i]) ++cnt;
	return cnt;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(unused[j]==0){
			unused[j]=1;
			x[i]=j;
			if(i==n){
				cost=0;
				for(int k=2;k<=n;k++) cost+=count(a[x[k-1]],a[x[k]]);
				if(cost<smin) smin=cost;
			}else Try(i+1);
			unused[j]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cost=0;
	smin=9999999999;
	Try(1);
	cout<<smin;
	return 0;
}
