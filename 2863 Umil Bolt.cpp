#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; float v;
    while(cin>>t){
            float minor = 11;
        while(t--){
            cin >> v;
            if(v < minor){
                minor = v;
            }
        }
        cout<<minor<<endl;
    }

    return 0;
}
