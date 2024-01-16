#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore(); // **
    while(t--){
        string s;
        getline(cin, s);

        if(!s.empty() && s[0] != ' ') cout << s[0]; //edge case
        for(int i=1; i<s.size(); i++){
            if(s[i-1] == ' ' && s[i] != ' ') cout << s[i];
        }cout << '\n';
    }

    return 0;
}