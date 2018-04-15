#include <bits/stdc++.h>
//https://www.hackerrank.com/challenges/equal/problem
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		int a[10005];
		int min_value=10005;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			if(a[i]<min_value) min_value=a[i];
		}
		long long int min_way=1e9+1;
		for(int j=-5;j<=0;j++){
			long long int count_ways=0; // tong so cach chuyen tat ca cac gia tri a[i] ve gia tri min-j
			for(int i=1;i<=n;i++){
				long different=a[i]-(min_value+j);
				count_ways+=different/5+(different%5)/2+(different%5)%2;
			}
			if(count_ways<min_way) min_way=count_ways;
		}
		cout<<min_way<<"\n";
	}
	return 0;
}

