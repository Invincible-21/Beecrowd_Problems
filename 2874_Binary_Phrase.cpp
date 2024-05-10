#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    while(cin >> t){
        while(t--){
            string s; cin >> s;
            reverse(s.begin(), s.end());
            string ans;

            int sum = 0;

            for(int i=0; i<s.size(); i++){
                if(s[i] == '1'){
                    int x = pow(2, i);
                    sum += x;
                }
            }
            char ch = sum;
            cout << ch;
        }cout << '\n';
    }

    return 0;
}