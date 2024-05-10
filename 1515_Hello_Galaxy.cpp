#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n; cin >> n;
        if(n == 0) return 0;

        pair<string, int>p;
        p.second = INT_MAX;

        for(int i=0; i<n; i++){
            string s; cin >> s;
            int a, b; cin >> a >> b;
            int x = a - b;
            
            if(x < p.second){
                p.first = s;
                p.second = x;
            }
        }

        cout << p.first << '\n';
    }

    return 0;
}