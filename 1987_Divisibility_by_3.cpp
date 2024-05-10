#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n;
    while(cin >> n){
        string s; cin >> s;

        int sum = 0;

        for(int i=0; i<n; i++){
            int x = s[i] - '0';
            sum += x;
        }

        if(sum % 3 == 0) cout << sum << " sim\n";
        else cout << sum << " nao\n";
    }

    return 0;
}