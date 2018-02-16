#include<iostream>
using namespace std;
int a[8];
int kt(){
	int k=0;
	for(int i=0; i<8-1; i++){
		if(k!=1&&a[i]<a[i+1])	k++;
		if(k!=2 && a[i]>a[i+1]) k+=2;
	}
	return k;
}
int main(){
	for(int i=0;i<8;i++)	cin>>a[i];
	if(kt()==1) cout<<"ascending";
	else if(kt()==2) cout<<"descending";
	else cout<<"mixed";
}
