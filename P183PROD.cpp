#include <bits/stdc++.h>
using namespace std;
bool nguyento(long long x){
	if(x==2 || x==3) return true;
	if(x<2 || x%2==0 || x%3==0) return false;
	int m=sqrt(x);
	if(m*m==x) return false;
	for(int i=5;i<=m;i+=6)
		if(x%i==0 || x%(i+2)==0) return false;
	return true;
}
int main(){
	long N, M;
	cin>>N>>M;
	while(N){
		while(!nguyento(M))	M++;
		cout<<M<<" ";
		M++;
		N--;
	}
	return 0;
}

