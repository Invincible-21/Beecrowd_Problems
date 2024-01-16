#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);

        int n = s.size();
        int x = (n / 2) - 1;

        for(int i=x; i>=0; i--){
            cout << s[i];
        }

        for(int i=n-1; i>x; i--){
            cout << s[i];
        }
        cout << '\n';
    }
    
    return 0;
}