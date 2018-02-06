#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	long n;
	long long s, a[200][15],res=-1;
    cin >> n;
    for(int i=1; i<=n; i++)
        for (int j=1; j<=11; j++)
            cin >> a[i][j];
    for(int i=1; i<=n-2; i++)
        for (int j=i+1; j<=n-1; j++ )
            for (int k=j+1; k<=n; k++){
                s=0;
                for (int u=1; u<=11; u++)
                    s=s+max(a[i][u],max(a[j][u],a[k][u]));
                res=max(res,s);
            }
    cout << res;
    return 0;
}
