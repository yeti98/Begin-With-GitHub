#include <bits/stdc++.h>
using namespace std;
int s1,s2,s3;
int v1[100005], v2[100005], v3[100005];
bool bS(int v[], int size, int x){
	int l=1, h=size;
	while(l<=h){
		int m=(l+h)/2;
		if(v[m]==x) return true;
		if(v[m]<x) l=m+1;
		else h=m-1;
	}
	return false;
}
int main(){
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++) cin>>v1[i];
	for(int i=1;i<=s2;i++) cin>>v2[i];
	for(int i=1;i<=s3;i++) cin>>v3[i];
	for(int i=s1-1;i>=0;i--) v1[i]+=v1[i+1];
	for(int i=s2-1;i>=0;i--) v2[i]+=v2[i+1];
	for(int i=s3-1;i>=0;i--) v3[i]+=v3[i+1];
	sort(v1+1, v1+1+s1);
	sort(v2+1, v2+1+s2);
	sort(v3+1, v3+1+s3);
	int idx=s1;
	while(idx>-1){
		if(bS(v2,s2,v1[idx]) && bS(v3,s3,v1[idx])){
			cout<<v1[idx];
			return 0;
		}
		else idx--;
	}
	cout<<0;
	return 0;
}

