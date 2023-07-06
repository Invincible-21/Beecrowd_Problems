#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        char str[100];
        int b;
        cin>>str>>b;
        if(!strcmp(str, "Thor")) cout<<"Y\n";
        // This line calls the `strcmp()` function to compare the string `str` to the string "Thor".

        else cout<<"N\n";
    }

    return 0;
}