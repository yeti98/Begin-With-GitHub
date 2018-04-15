#include <bits/stdc++.h>
using namespace std;
long coinChange(int c[], int n, int s){
	long table[s+1];
	memset(table, 0, sizeof(table));
	//base case
	table[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=c[i];j<=s;j++){
			table[j]+=table[j-c[i]];
		}
	}
	return table[s];
}
int main(){
	int s, n;
	cin>>s>>n;
	int c[55];
	for(int i=1;i<=n;i++) cin>>c[i];
	cout<<coinChange(c, n, s);
	return 0;
}

