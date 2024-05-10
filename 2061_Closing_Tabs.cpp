#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int ans = n;
    while(m--){
        string s; cin >> s;
        if(s[0] == 'f') ans++;
        else ans--;
    }
    cout << ans << '\n';

    return 0;
}