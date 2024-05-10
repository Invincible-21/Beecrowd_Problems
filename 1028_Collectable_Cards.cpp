#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int x = gcd(a, b);
        cout << x << '\n';
    }

    return 0;
}


