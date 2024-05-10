#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    for(int i=2; i*i<=x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(isPrime(x)) cout << x << " eh primo\n";
        else cout << x << " nao eh primo\n";
    }

    return 0;
}