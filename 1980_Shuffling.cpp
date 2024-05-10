#include<bits/stdc++.h>
using namespace std;
#define int long long

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int32_t main(){
    string s;
    while(1){
        cin >> s;
        if(s == "0") break;

        int total = factorial(s.size());
        for(char c = 'a'; c <= 'z'; c++){
            int cnt = count(s.begin(), s.end(), c);
            total /= factorial(cnt);
        }
        cout << total << '\n';
    }

    return 0;
}