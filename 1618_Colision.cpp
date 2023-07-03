#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;

        if(rx>=ax && rx<=bx && rx>=dx && rx<=cx && ry >= ay && ry<=dy && ry>=by && ry<=cy){
            cout<<"1\n";
        }else cout<<"0\n";
    }
    
    return 0;
}

