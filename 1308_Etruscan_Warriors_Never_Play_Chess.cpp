#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        for(int i=1; i<=n; i++){
            int x = (i*(i+1)/2);
            if(x == n){
                cout << i << '\n';
                break;
            }else if(x > n){
                cout << i-1 << '\n';
                break;
            } 
        }
    }

    return 0;
}