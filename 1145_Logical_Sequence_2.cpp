#include<bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int n; cin >> n;
    if(n == 0) return 0;

    int x = 0, y = 0;
    while(n--){
      int a, b; cin >> a >> b;
      if(a > b) x++;
      else if(a < b) y++;
    }

    cout << x << " " << y << '\n';
  } 

  return 0;
}