#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        string s;
        getline(cin, s);

        set<char>st;

        if(s == "*") return 0;
        else{
            char x = tolower(s[0]);
            st.insert(x);

            for(int i=1; i<s.size()-1; i++){
                if(s[i] == ' '){
                    char x = tolower(s[i+1]);
                    st.insert(x);
                }
            }

            if(st.size() == 1) cout << "Y\n";
            else cout << "N\n";
        }
    }

    return 0;
}