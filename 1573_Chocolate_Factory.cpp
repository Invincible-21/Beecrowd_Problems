#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0){
            return 0;
        }else{
            int x = a*b*c;
            int ans = cbrt(x);
            cout << ans << '\n';
        } 
    }

    return 0;
}