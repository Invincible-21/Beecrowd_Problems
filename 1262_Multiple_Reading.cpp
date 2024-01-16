#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int p; cin >> p;
        int cnt = 0;
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'W'){
                cnt++;
                i++;
            }
            else{
                int r = 0;
                while(r < p && s[i] == 'R'){
                    r++;
                    i++;
                }
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}