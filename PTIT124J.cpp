#include <iostream>
inline int check(const std::string temp){
	std::string oct[8]={"000","001","010","011","100","101","110","111"};
	for(int i=0;i<=7;i++) if(temp==oct[i]) return i;
}
int main(){
	std::ios::sync_with_stdio(false);
	std::string binary_string;
	std::cin>>binary_string;
	while(binary_string.length()%3) binary_string='0'+binary_string;
	for(int i=0;i<binary_string.length();i+=3)	std::cout<<check(binary_string.substr(i,3));
	return 0;
}
