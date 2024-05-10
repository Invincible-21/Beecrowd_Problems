#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];

  int ans, mn = 21;
  for(int i=0; i<n; i++){
    if(arr[i] < mn){
      mn = arr[i];
      ans = i+1;
    }
  }

  cout << ans << '\n';
  
  return 0;
}