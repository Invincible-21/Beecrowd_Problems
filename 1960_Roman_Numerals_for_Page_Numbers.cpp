#include<bits/stdc++.h>
using namespace std;
#define int long long

string intToRoman(int num){
    vector<int>values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string>symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result;
    for(int i=0; i<values.size() && num >=0; i++){
        while(values[i] <= num){
            num -= values[i];
            result += symbols[i];
        }
    }
    return result;
}

int32_t main(){
    int n; cin >> n;
    cout << intToRoman(n) << '\n';

    return 0;
}