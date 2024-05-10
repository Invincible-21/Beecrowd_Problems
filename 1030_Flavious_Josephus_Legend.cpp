#include<bits/stdc++.h>
using namespace std;
#define int long long

int josephus(int n, int k){
    if(n == 1) return 1;
    return (josephus(n-1, k) + k - 1) % n + 1; 
}

int32_t main(){
    int t; cin >> t;
    for(int i=1; i<=t; i++){
        int n, k; cin >> n >> k;
        cout << "Case " << i << ": " << josephus(n, k) << '\n';
    }

    return 0;
}