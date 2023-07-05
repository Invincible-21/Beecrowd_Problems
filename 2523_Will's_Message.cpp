#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1001];

    // This line repeatedly reads a string from the user 
    // and stores it in the `s` array until the user enters an empty line.
    // The `EOF` constant represents the end of file.
    while(scanf("%s", s) != EOF){
        int n; cin>>n;
        while(n--){
            int l; cin>>l;

            // This line prints the character at index `l-1` in the `s` array.
            printf("%c",s[l-1]);
        }cout<<"\n";
    }

    return 0;
}