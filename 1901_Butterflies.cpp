#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int x = 2*n;
    set<int>ans;

    while(x--){
        int a, b; cin >> a >> b;
        ans.insert(arr[a-1][b-1]);
    }

    cout << ans.size() << '\n';

    return 0;
}