#include <iostream>
inline long stl(std::string &s){
	long res=0;
	for(int i=0;i<s.length();i++) res=res*10+(s[i]-'0');
	return res;
}
void addone(std::string &s){
	int x;
	if(s.length()%2) x=s.length()/2+1; else x=s.length()/2;
	int carry=1;
	for(int i=x-1;i>-1;i--){
		if(carry==0) return;
		int sum=s[i]-'0'+carry;
		s[i]=sum%10+'0';
		carry=sum/10;
	}
}
int main(){
	while(1){
		std::string num;
		std::cin>>num;
		if(num=="0") return 0;
		std::string pnum(num);
		int i=0, j=num.length()-1;
		while(i<=j)	{
			if(pnum[i]!=pnum[j]) pnum[j]=pnum[i];
			++i, --j;
		}
		long res=stl(pnum)-stl(num);
//		std::cout<<"\npnum:\t"<<pnum<<"\tres:\t"<<res<<'\n';
		if(res<0){
			addone(pnum);
			std::cout<<"\npnum:\t"<<pnum<<'\n';
			int i=0, j=pnum.length()-1;
			while(i<=j)	{
				if(pnum[i]!=pnum[j]) pnum[j]=pnum[i];
				++i, --j;
			}
			res=stl(pnum)-stl(num);
		}
		std::cout<<res<<'\n';
	}
	return 0;
}
