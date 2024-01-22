#include<bits/stdc++.h>
using namespace std;

int main(){
    
    while(1){
        char c; cin >> c;
        string s; cin >> s;

        if(c == '0' && s == "0") return 0;

        string ans;

        for(char x: s){
            if(x != c){
                ans += x;
            }
        }

        while(ans.size() > 1 && ans[0] == '0'){
            ans.erase(ans.begin());
        }

        if(ans.empty()) cout << '0' << '\n';
        else cout << ans << '\n';
    }

    return 0;
}