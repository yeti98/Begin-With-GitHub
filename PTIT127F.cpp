#include<iostream>
using namespace std;
int main (){
    long N;
   	cin>>N;
   	long arr[300008];
   	for (long i=1; i<=N; i++)	cin>>arr[i];
   	long minsort=0, book=N;
	for (int i=N; i>=1; i--){
    	if (arr[i]==book)   --book;
    	else ++minsort;
   	}
   	cout<<minsort;
   	return 0;
} 
