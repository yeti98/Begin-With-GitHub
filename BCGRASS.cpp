#include <bits/stdc++.h>
using namespace std;
int N,M;
int chuaxet[105][105];
int ar[105][105];

void init(){
	memset(chuaxet, 0, sizeof(chuaxet));
	memset(ar, 0, sizeof(ar));
}
int slt=0;
void DFS(int x, int y){
	chuaxet[x][y]=0;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(chuaxet[x+i][y+j]==1 && ar[x+i][y+j]==1 && ( i==0 || j==0)){
				DFS(x+i,y+j);
			}
		}
	}
}
int solve(){
	slt=0;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(ar[i][j]==1 && chuaxet[i][j]==1){
				DFS(i, j);
				slt++;
			}
		}
	}
	return slt;
}
int main(){
	init();
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++) {
			char ch;
			cin>>ch;
			if(ch=='.') ar[i][j]==0; else ar[i][j]=1;
			chuaxet[i][j]=1;
		}
	}
	int ans=solve();
	cout<<ans<<"\n";
	return 0;
}

