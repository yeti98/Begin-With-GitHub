#include <bits/stdc++.h>
using namespace std;
string arr[4];
string getTypeOfString(const int a,const int b,const int c){
	if((abs(a-b)< c && c< a+b) || (abs(c-b)< a && a< c+b) || (abs(a-c)< b && b< a+c))
		return "TRIANGLE";
	if(a+b==c || a+c==b || b+c==a) return "SEGMENT";
	return "IMPOSSIBLE";
}
int solver(){
	for(int i=0;i<4;i++){
		if(arr[i]=="TRIANGLE") return i;	
	}
	for(int i=0;i<4;i++){
		if(arr[i]=="SEGMENT") return i;	
	}
	return -1;
}
int main(){
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	arr[0]=getTypeOfString(a, b, c);
	arr[1]=getTypeOfString(a, b, d);
	arr[2]=getTypeOfString(a, c, d);
	arr[3]=getTypeOfString(b, c, d);
	if(solver()==-1) cout<<"IMPOSSIBLE";
	else cout<<arr[solver()];
	return 0;
}
