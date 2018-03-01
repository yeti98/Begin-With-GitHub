#include <iostream>
#include <vector>
using namespace std;
int n;
int Q[100];
int dem=0;
void Solution(int r){
	if(r==n+1) ++dem;
	else {
		for(int i=1;i<=n;i++){
			bool legal=true;
			for(int j=1;j<=r-1;j++){
				if(Q[j]==i || Q[j]==i+r-j || Q[j]==i-r+j) legal=false;
			}
			if (legal){
				Q[r]=j;
				Solution(r+1);
			}
		}
	}
}
int main(){
	cin>>n;
	Solution(1);
	cout<<dem<<endl;
	return 0;
}
