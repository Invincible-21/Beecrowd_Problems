#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string decrypted = "";

        for(int i=s.size()-1; i>=0; i--){
            if(islower(s[i])) decrypted += s[i];
        }
        cout << decrypted << '\n';
    }

    return 0;
}