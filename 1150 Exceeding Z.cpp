#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, z; cin >> x;
    while(1){
        cin >> z;
        if(z > x) break;
    }

    int cnt = 0, sum = 0;
    for(int i=x; ; i++){
        sum += i;
        cnt++;
        if(sum > z) break;
    }
    cout << cnt << '\n';

    return 0;
}