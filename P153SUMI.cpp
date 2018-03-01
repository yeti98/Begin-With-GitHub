#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	int arr[100005];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
	int dem=1, i=n;
	while(arr[i]>=arr[i-1]) ++dem, --i;
	--i;
	while(arr[i]>=arr[i-1]) --i;
	if(i<=0) cout<<dem;
	else cout<<-1;
	return 0;
}
