#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    cin>>x;
    int mx = 0;
    while(1){
        cin>>z;
        if(z>x) break;
        if(z>mx) mx = z;
    }
    int cnt = 0;
    int sum = 0;
    for(int i=x; ; i++){
        sum += i;
        cnt++;
        if(sum>z) break;
    }
    cout<<cnt<<endl;

    return 0;
}
