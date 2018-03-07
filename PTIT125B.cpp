#include <bits/stdc++.h>
using namespace std;
struct cow{
    long long sum;
    long long sale;
};   
int cmp(cow a, cow b){
    if(a.sum>b.sum) return 0;
    return 1;
}
int main (){
    int n;
    long long B;
    cin>>n>>B;
    cow arr[1005];
    long long a, b;
    for(long i=1;i<=n;i++){
       	cin>>a>>b;
       	arr[i].sum=a+b;
       	arr[i].sale=a/2;
    }
    sort(arr+1,arr+n+1,cmp);
    int cnt=0;
    for(int i=1;i<=n;i++){
		if (B>=arr[i].sum){
        	cnt++;
        	B-=arr[i].sum;
    	}
        else{
        	long long maxx=arr[i].sale;
        	for(int j=i; j>=1; j--)
        		if(arr[j].sale>maxx) maxx=arr[j].sale;
        	B+=maxx;
        	if(B>=arr[i].sum){
        		cnt++;
        		B-=arr[i].sum;
        	}
        	else break;
        }
    }
    cout<<cnt;
    return 0;
}
