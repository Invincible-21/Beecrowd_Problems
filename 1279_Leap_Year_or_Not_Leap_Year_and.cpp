#include<bits/stdc++.h>
using namespace std;

#define int long long

bool lp(int year){
    if((year%4 == 0 && year%100 != 0) || year%400 == 0) return 1;
    else return 0;
}

bool huu(int year){
    if(!lp(year) && year%15 == 0) return true;
    else return false;
}

bool buu(int year){
    if(lp(year) && year%55 == 0) return true;
    else return false;
}

int32_t main(){
    int n; 
    while(cin >> n){
        if(lp(n)) cout << "This is leap year.\n";
        if(huu(n)) cout << "This is huluculu festival year.\n";
        if(buu(n)) cout << "This is bulukulu festival year.\n";
        if(!lp(n) && !huu(n) && !buu(n))cout << "This is an ordinary year.\n";
    }

    return 0;
}