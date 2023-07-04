#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[200];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool x = true;
    for(int i=0; i<n-1; i++){
        if(arr[i+1]<arr[i]){
            x = false;
            cout<<i+2<<endl;
            break;
        }
    }

    if(x==true) cout<<"0\n";

    return 0;
}

// output observation