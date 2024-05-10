#include<bits/stdc++.h>
using namespace std;

int main(){
    
    while(1){
        int a, b; cin >> a >> b;
        if(a == 0 && b == 0){
            return 0;
        } 

        set<int>s1;
        set<int>s2;
        for(int i=0; i<a; i++){
            int x; cin >> x;
            s1.insert(x);
        }
        for(int i=0; i<b; i++){
            int x; cin >> x;
            s2.insert(x);
        }

        int ans = 0;

        for(auto &e : s1){
            if(s2.find(e) != s2.end()){
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}