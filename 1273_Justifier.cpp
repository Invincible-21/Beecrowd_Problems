#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int n; cin >> n;
        if(n == 0) return 0;

        vector<string>v;
    
        int sz = -1;

        while(n--){
            string s; cin >> s;
            int ss = s.size();
            if(ss > sz) sz = ss;
            v.push_back(s);
        }

        for(auto x: v){
            int ss = x.size();
            int y = sz - ss;
            while(y--){
                cout << ' ';
            }
            cout << x << '\n';
        }
        cout << '\n';
    }

    return 0;
}