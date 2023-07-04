#include<bits/stdc++.h>
using namespace std;

int main(){
    int n[100];
    int q, N, Q;
    while(cin>>N>>Q){
        for(int i=0; i<N; i++){
            cin>>n[i];
        }
        sort(n, n+N, greater<int>());
        // The greater<int> class is a template
        // class that defines a comparison function for integers. 
        // This function is used to sort the array in descending order.

        for(int i=0; i<Q; i++){
            cin>>q;
            cout<<n[q-1]<<endl;
        }
    }
    return 0;

}