#include <iostream>
int main(){
	int test;
	std::cin>>test;
	while(test--){
		int i, r; std::cin>>i>>r;
		std::string s; std::cin>>s;
		std::cout<<i<<' ';
		for(int j=0;j<s.length();j++){
			int k=0;
			while(k++<r) std::cout<<s[j];
		}
		std::cout<<'\n';
	}
	return 0;
}
