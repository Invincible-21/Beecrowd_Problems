#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n, k; cin >> n >> k;
        if(n == 0 && k == 0) return 0;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        } 
        sort(arr, arr+n);
        int ans = 0;
        for(int i=1; i<=n; i++){
            int cnt = 0;
            while(arr[i-1] == arr[i]){
                cnt++;
                i++;
            }
            cnt++;
            if(cnt >= k) ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}