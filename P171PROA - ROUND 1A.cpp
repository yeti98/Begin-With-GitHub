#include <iostream>
int main(){
	long long l,r,x;
	std::cin>>l>>r>>x;
	long long gt=1;
	int check=0;
	if(l<=1 && 1<=r) std::cout<<1<<' ', check=1;
	while(gt<=r && (r/gt)>=x){
		gt=gt*x;
		if(l<=gt && gt<=r)	std::cout<<gt<<' ', check=1;
	}
	if(!check) std::cout<<-1;
	return 0;
}
