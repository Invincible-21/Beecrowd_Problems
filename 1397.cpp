#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int t; cin>>t;
        if(t==0) break;
        int p1 = 0, p2 = 0;
        while(t--){
            int s1,s2;
            cin>>s1>>s2;
            if(s1>s2) p1++;
            else if(s2>s1) p2++;
        }
        //if(p1==p2) cout<<'0'<<" "<<'0'<<endl;
        cout<<p1<<" "<<p2<<endl;

    }

    return 0;
}

