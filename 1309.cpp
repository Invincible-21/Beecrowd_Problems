#include<bits/stdc++.h>
using namespace std;

int main(){
    int ss1, ss2;
    string s1, s2;

    // This loop gets two lines from the standard input and stores them in the variables `s1` and `s2`.
    while(getline(cin, s1) && getline(cin, s2)){
        ss1 = s1.size();
        ss2 = s2.size();
        cout<<"$";

        // This loop iterates through the string `s1` and prints each character.
        for(int i=0; i<ss1; i++){

            // This condition checks if the current character is the third character in a row. If it is, then a comma is printed.
            if((ss1-i)%3==0 && i>0){
                cout<<",";
            }
            cout<<s1[i];
        }

        cout<<".";
        if(ss2 < 2){
            cout<<"0";
        }
        for(int i=0; i<ss2; i++){
            cout<<s2[i];
        }
        cout<<"\n";

    }

    return 0;
}