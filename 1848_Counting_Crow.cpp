#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int cawCnt = 0;
    string s;
    while(cawCnt < 3){
        getline(cin, s);
        if(s == "caw caw"){
            cout << sum << '\n';
            sum = 0;
            cawCnt++;    
        }
        else{
            if(s[0] == '*') sum += 4;
            if(s[1] == '*') sum += 2;
            if(s[2] == '*') sum += 1;
        }
    }

    return 0;
}