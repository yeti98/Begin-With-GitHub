#include <iostream>
using namespace std;
int main(){
	int x[101], n, m;
	int a,b,c, res=0;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++)
			for(int k=j+1;k<n;k++){
				int sum=x[i]+x[j]+x[k];
				if(sum<=m && sum>res) res=sum;
			}
	cout<<res;
}
