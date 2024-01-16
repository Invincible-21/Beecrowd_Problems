#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int m; cin >> m;
        string ans;

        for(int i=0; i<s.size(); i++){
            int ck = (int)(s[i] - m);

            int final_m;
        
            if(ck < 65){
                int int_of_char = (int)s[i];
                int diff_from_a = int_of_char - 65;
                final_m = 91 - (m - diff_from_a);
            }
            else{
                final_m = ck;
            }

            char x = (char)final_m;
            ans.push_back(x);
        }
        cout << ans << '\n';
    }
    
    return 0;
}