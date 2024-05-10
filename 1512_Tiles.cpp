#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b){
    return a*b / gcd(a, b);
}

int main(){

    while(1){
        int n, a, b; cin >> n >> a >> b;
        if(n == 0 && a == 0 && b == 0) return 0;

        int x = n / a; // no. of multiples of a
        int y = n / b; // no. of multiples of b

        int lcm_ab = lcm(a, b);
        int z = n / lcm_ab; // no. of multiples of lcm_ab

        cout << x + y - z << '\n';
    }

    return 0;
}

