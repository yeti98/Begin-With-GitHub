#include <bits/stdc++.h>
using namespace std;
	int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n;
bool check(){
	for(int i=0;i<14;i++){
		if(n%arr[i]==0) return true;
	}
	return false;
}
int main(){
	cin>>n;
	if(check()) cout<<"YES"; else cout<<"NO";
	return 0;
}
