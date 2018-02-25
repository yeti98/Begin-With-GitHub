#include <iostream>
using namespace std;
int count[105];
int number[1000005];
string str[1000005];
int main(){
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>number[i];
		++count[number[i]]; //counting sort implementing
		cin>>str[i];
	}
	// brute force
	for(int i=0;i<100;i++){
		int j=0;
		while(count[i]>0){
			while(number[j]!=i) ++j;
			if(j<n/2) cout<<"- ";
			else cout<<str[j]<<" ";
			--count[i];
			++j;
		}
	}
	return 0;
}
