#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+1][n+1],s[n+1][n+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    if(n==2) cout<<a[1][2]/2<<" "<<a[1][2]/2;
    else{
        for(int j=2;j<n;j++){
            s[j][j+1]=a[1][j]-a[1][j+1];
            if(j==2) cout << a[1][2]-(s[j][j+1]+a[j][j+1])/2 << " ";
            cout << (s[j][j+1]+a[j][j+1])/2 << " ";
            if(j==n-1) cout << a[j][j+1]- (s[j][j+1]+a[j][j+1])/2;
        }
    }
}
