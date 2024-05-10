#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int n; cin >> n;
        if(n == 0) return 0;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
    
        int ans = 0;

        if(n == 2 && arr[0] != arr[1]){
            ans += 2;
        }

        else{
            for(int i=1; i<n-1; i++){
                if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1])){
                    ans++;
                }

            }

            if((arr[0] > arr[1] && arr[0] > arr[n-1]) || (arr[0] < arr[1] && arr[0] < arr[n-1])){
                ans++;
            }

            if((arr[n-1] > arr[0] && arr[n-1] > arr[n-2]) ||(arr[n-1] < arr[0] && arr[n-1] < arr[n-2])){
                ans++;
            }

        }

        cout << ans << '\n';
    }
    
    return 0;
}