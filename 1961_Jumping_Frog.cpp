#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, n; cin >> p >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool ck = 1;

    for(int i=1; i<n; i++){
        if(abs(arr[i] - arr[i-1]) > p){
            ck = 0;
            break;
        }
    }

    if(ck == 1) cout << "YOU WIN\n";
    else cout << "GAME OVER\n";

    return 0;
}
