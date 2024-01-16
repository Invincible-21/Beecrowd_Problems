#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int underScore = 0;
        int star = 0;

        for(int i = 0; i<s.size(); i++){
        if(s[i] == '_'){
            underScore++;
            if(underScore % 2 != 0){
                cout << "<i>";
            }else cout << "</i>";
        }
        else if(s[i] == '*'){
            star++;
            if(star%2 != 0){
                cout << "<b>";
            }else cout << "</b>";
        }
        else cout << s[i];
        }cout << '\n';
    }

    return 0;
}