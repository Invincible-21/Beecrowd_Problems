#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    while(1){
        int t; cin >> t;
        if(t == 0) return 0;

        while(t--){
            int arr[5];
            for(int i=0; i<5; i++) cin >> arr[i];

            int idx, cnt = 0;
            for(int i=0; i<5; i++){
                if(arr[i] <= 127){
                    idx = i;
                    cnt++;
                }
            }

            if(cnt == 1){
                if(idx == 0) cout << "A\n";
                if(idx == 1) cout << "B\n";
                if(idx == 2) cout << "C\n";
                if(idx == 3) cout << "D\n";
                if(idx == 4) cout << "E\n";
            }
            else cout << "*\n";

            // cout << idx << " " << cnt << '\n';

        }

    }

    return 0;
}