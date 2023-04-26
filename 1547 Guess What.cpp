#include <bits/stdc++.h>
using namespace std;

int findClosestElementIndex(int arr[], int n, int target) {
    int index = -1;
    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++) {
        int diff = abs(target - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    return index;
}

int main() {
    int t; cin>>t;
    while(t--){
        int n,t; cin>>n>>t;
        int arr[n],i;
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        if(arr[i]==t){
            cout<<i+1<<endl;
            break;
        }else{
            cout<<findClosestElementIndex(arr, n,t)+1<<endl;
        }
    }


    //int arr[] = {1, 3, 5, 7, 9};
    //int n = sizeof(arr) / sizeof(arr[0]);
    //int target = 6;
    //int closestIndex = findClosestElementIndex(arr, n, target);
    //cout << "The closest element index to " << target << " is " << closestIndex << endl;
    return 0;
}
