#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s; 
    while(getline(cin, s)){
        int freq[10] = {0};

        for(char ch : s){
            int d = ch - '0';
            freq[d]++;
        }

        int ans = 0;
        int mxCnt = 0;

        for(int i=9; i>=0; i--){
            if(freq[i] > mxCnt){
                mxCnt = freq[i];
                ans = i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}