#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int m = n+1;

    int arr[m][m];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int x = 0;

    for(int i=0; i<m-1; i++){
        for(int j=0; j<m-1; j++){
            x += (arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1]);
            if(x >=2) cout << 'S';
            else cout << 'U';
            x = 0; 
        }cout << '\n';
    }

    return 0;
}