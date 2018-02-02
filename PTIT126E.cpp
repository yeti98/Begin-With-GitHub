#include <iostream>
using namespace std;
int main(){
	char str[4]={'Y', 'N', 'P', 'A'};
	while(1){
		int cnt[4]={0};
		string s;
		cin>>s;
		if(s=="#") break;
		for(int i=0;i<s.length();i++){
			for(int j=0;j<4;j++)
				if(s[i]==str[j]) ++cnt[j];
		}
		if((cnt[3]>=s.length()/2 && s.length()%2==0) ||( cnt[3]>s.length()/2 && s.length()%2==1))cout<<"need quorum\n";
		else if(cnt[0]>cnt[1]) cout<<"yes\n";
		else if(cnt[0]<cnt[1]) cout<<"no\n";
		else cout<<"tie\n";
	}
	return 0;
}
