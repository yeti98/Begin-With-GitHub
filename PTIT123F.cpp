#include <iostream>
#include <vector>
int main(){
	int test;
	std::cin>>test;
	while(test--){
		int n;
		std::cin>>n;
		std::vector<int> v(n,1);
		for(int i=2;i<=n;i++){
			for(int j=0;j<n;j++) if((j+1)%i==0) v[j]=not(v[j]);
		}
		int res;
		for(int i=0;i<n;i++) if(v[i]) ++res;
		std::cout<<res<<'\n';
	}
	return 0;
}
