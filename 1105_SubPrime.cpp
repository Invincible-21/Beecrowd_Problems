#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    while(1){
        int b, n; cin >> b >> n;
        if(b == 0 && n == 0) break;

        int reserves[b+1];
        for(int i=1; i<=b; i++){
            cin >> reserves[i];
        }

        while(n--){
            int debenture, creditor, value;
            cin >> debenture >> creditor >> value;

            reserves[debenture] -= value;
            reserves[creditor] += value;
        }

        bool possible = true;

        for(int i=1; i<=b; i++){
            if(reserves[i] < 0){
                possible = false;
                break;
            }
        }

        if(possible) cout << "S\n";
        else cout << "N\n";
    }

    return 0;
}