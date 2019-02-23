#include "iostream"
using namespace std;
int n,T;
int X[100]={0};
bool Solution(int X[], int T, int i){
	if(T==0) return true;
	else if(T<0 || i==0) return false;
	return(Solution(X,T,i-1) || Solution(X,T-X[i],i-1));
}
int main(int argc, char const *argv[]){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>X[i];
	cin>>T;
	cout<<Solution(X,T,n)<<endl;
	return 0;
}
