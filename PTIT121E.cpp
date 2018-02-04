#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<int> stk;
	for(int i=0;i<s.length();i++){
		if(s[i]=='C') stk.push(12);
		else if(s[i]=='H') stk.push(1);
		else if(s[i]=='O') stk.push(16);
		else if(s[i]=='(') stk.push(0);
		else if(s[i]==')') {
			int sum=0;
			while(stk.top()!=0) {
				sum+=stk.top();
				stk.pop();
			}
			stk.pop();
			stk.push(sum);
		}else stk.top()*=(s[i]-'0'); 
	}
	int res=0;
	while(!stk.empty()){
		res+=stk.top(); stk.pop();
	}
	cout<<res;
	return 0;
}
