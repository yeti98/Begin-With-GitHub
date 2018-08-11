#include <bits/stdc++.h>
using namespace std;
int cha[10005];
int rank[10005];
void init(){
	for(int i=1;i<=10005;i++) cha[i]=i;
}
int find(int x){
	while(x!=cha[x]) x=cha[x];
	return x;
}
int merge(int x, int y){
	int chax = find(x);
	int chay = find(y);
	if(chax!=chay){
		if(chax<chay){
			cha[chay]=chax;
		}else{
			cha[chax]=chay;
		}
		return 1;
	}
	return 0; 
}
int main(){
	int P;	cin>>P;
	init();
	while(P--){
		int x, y, t;	cin>>x>>y>>t;
		if(t==1){
			merge(x, y);
		}else{
			if(find(x)==find(y)) cout<<"1\n";
			else cout<<"0\n";
		}
	}
	return 0;
}

