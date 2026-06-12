#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W; cin >> H >> W;
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++){
      int ans = 4;
      if(i == H) ans--; if(i == 1) ans--;
      if(j == W) ans--; if(j == 1) ans--;
      cout << ans;
      if(j != W) cout << " ";
    }
    cout << "\n";
  }
}
