#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while(1){
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0) return 0;

        int x, y; 
        if(a > b){
            x = a;
            y = b;
        }else{
            x = b;
            y = a;
        }

        int p = x*(-1);
        int q = y;

        for(int i = p; i<=q; i++){
            int m = (x+y+i)/3;
            if(m == x || m == y){
                cout << i << '\n';
                break;
            }
        }
    }
}