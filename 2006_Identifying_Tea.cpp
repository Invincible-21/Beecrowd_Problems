#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    int arr[5];
    int ans = 0;

    for(int i=0; i<5; i++){
        cin >> arr[i];
        if(arr[i] == t) ans++;
    }

    cout << ans << '\n';

    return 0;
}