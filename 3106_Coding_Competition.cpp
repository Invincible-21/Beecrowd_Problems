#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        int x = arr[i] - (arr[i]%3);
        ans += x;
    }
    cout << ans << '\n';

    return 0;
}