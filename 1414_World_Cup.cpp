#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int t, n; cin >> t >> n;
        if(t == 0) return 0;

        int cnt = 0;
        while(t--){
            string s; cin >> s;
            int x; cin >> x;
            if(x == 1) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}

// verdict: wrong answer
