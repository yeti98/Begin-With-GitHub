#include <iostream>
using namespace std;
int window[5]={0}, N, M;
string str[4]={"....","*...","**..","***."};
int getTypeOfWindow(string s){
	for(int i=0;i<4;i++){
		if(s==str[i]) return i;
	}
	return 4;
}
int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++){
		char arr[4][101];
		string tmp; cin>>tmp;
		for(int j=0;j<4;j++) {
			cin>>tmp;
			int k=1, cnt=0;
			while(k<tmp.length()){arr[j][cnt]=tmp[k]; k+=5; cnt++;};
		}
		for(int j=0;j<M;j++){
			string s;
			for(int k=0;k<4;k++) s+=arr[k][j];
			++window[getTypeOfWindow(s)];
		}
	}
	for(int i=0;i<5;i++) cout<<window[i]<<" ";
	
	return 0;
}
