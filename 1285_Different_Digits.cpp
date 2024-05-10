#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    while(cin >> n >> m){
        int ans = 0;
        for(int i = n; i <= m; i++){
            int sz = 0;
            set<int>s;
            int tmp = i;
            while(tmp != 0){
                int lastDigit = tmp%10;
                sz++;
                s.insert(lastDigit);
                tmp /= 10;
            }
            if(sz == s.size()) ans++;
            else continue;
        }
        cout << ans << '\n';
    }

    return 0;
}