#include <iostream>
#include <vector>
using namespace std;
int n;
int Q[100];
int dem=0;
void Solution(int r){
	if(r==n+1) ++dem;
	else {
		for(int j=1;j<=n;j++){
			bool legal=true;
			for(int i=1;i<=r-1;i++){
				if(Q[i]==j || Q[i]==j+r-i || Q[i]==j-r+i) legal=false;
			}
			if (legal){
				Q[r]=j;
				Solution(r+1);
			}
		}
	}
}
int main()
{
	cin>>n;
	Solution(1);
	cout<<dem<<endl;
	return 0;
}
