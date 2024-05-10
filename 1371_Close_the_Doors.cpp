#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n; cin >> n;
        if(n == 0) return 0;

        for(int i=1; i*i <= n; i++){
            cout << i*i;
            if((i+1) * (i+1) <= n) cout << " ";
        }cout << '\n';
    }

    return 0;
}