#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        float n; cin>>n; //40
        int dia=0;
        while(n>1.0){
            dia += 1; //1 2 3 4 5 6
            n = n/2.0; // 20 10 5 2.5 1.7 0
        }
        cout<<dia<<" dias"<<endl;
    }

return 0;
}
