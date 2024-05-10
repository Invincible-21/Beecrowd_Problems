#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        double ra, rb; cin >> ra >> rb;

        int yr = 0;
        while(a <= b){
            a += a*ra/100;
            b += b*rb/100;
            yr++;

            if(yr > 100) break;
        }

        if(yr <= 100) cout << yr << " anos.\n";
        else cout << "Mais de 1 seculo.\n";
    }

    return 0;
}