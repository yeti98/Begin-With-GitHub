#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    vector <long long> result(100,0);
    for(long long arr_i = 0; arr_i< n; arr_i++){
       cin >> arr[arr_i]; ++result[arr[arr_i]];
    }
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    return 0;
}
