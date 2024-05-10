#include<bits/stdc++.h>
using namespace std;

int k = 0;

int fib(int n){
    k++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);  
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = fib(n);

        cout << "fib(" << n << ") = " << k-1 << " calls = " << ans << '\n';  
        k = 0;
    }

    return 0;
}