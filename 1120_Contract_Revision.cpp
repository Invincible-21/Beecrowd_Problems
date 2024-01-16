#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){

    bool ck = true;
    while(ck){
        int n; cin >> n;
        string s; cin >> s;

        int k;
        if(s.size() == 1){
            k = stoi(s);
        }
        if(n == 0 && k == 0){
            ck = false;
            return 0;
        } 
        
        for(int i=0; i<s.size();){
            int d = s[i] - '0';
            if(d == n) s.erase(i, 1);
            else i++;
        }

        if(s[0] == '0' || s.size() == 0 ) cout << 0 << '\n';
        else cout << s << '\n';
    }

    return 0;
}