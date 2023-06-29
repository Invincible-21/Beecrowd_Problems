#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        int h,d,g; cin>>h>>d>>g;
        if((h>=200 && h<=300) && (d>=50) && (g>=150)) cout<<"Sim\n";
        else cout<<"Nao\n";
    }
    
    return 0;
}

