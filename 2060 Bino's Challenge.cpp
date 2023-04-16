#include<bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;
        int de2 = 0;
        int de3 = 0;
        int de4 = 0;
        int de5 = 0;
    while(t--){
        int n; cin>>n;

        if(n%2 == 0) de2++;
        if(n%3 == 0) de3++;
        if(n%4 == 0) de4++;
        if(n%5 == 0) de5++;
    }
    cout<<de2<<" Multiplo(s) de "<<'2'<<endl;
    cout<<de3<<" Multiplo(s) de "<<'3'<<endl;
    cout<<de4<<" Multiplo(s) de "<<'4'<<endl;
    cout<<de5<<" Multiplo(s) de "<<'5'<<endl;


    return 0;
}
