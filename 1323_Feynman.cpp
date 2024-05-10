#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    while(1){
        int n; cin >> n;
        if(n==0) return 0;

        int ans = (n*(n+1)*((2*n)+1))/6;

        cout << ans << '\n';
    }
    
    return 0;
}