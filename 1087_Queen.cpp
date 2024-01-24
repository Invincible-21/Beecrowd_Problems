#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) return 0;

        int x = (a+b)%2;
        int y = (c+d)%2;

        if(a == c && b == d) cout << 0 << '\n';
        else{
            if(x == y) cout << 1 << '\n';
            else if(x != y) cout << 2 << '\n';
        }
    }

    return 0;
}