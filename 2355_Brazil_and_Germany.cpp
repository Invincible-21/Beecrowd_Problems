#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n; cin >> n;
        if(n==0) return 0;

        int bra = 0, ger = 0;

        int x = n/90;
        int r = n%90;
        int y = r/13;
        int z = r%13;

        if(r==0){
            bra += x*1;
            ger += x*7;
        }else{
            bra += x;
            int ex = 0;
            if(z!=0) ex++;
            ger += (x*7)+(y+ex);
        }

        cout << "Brasil " << bra << " x " << "Alemanha " << ger << '\n';
    }

    return 0;
}