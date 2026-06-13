#include<bits/stdc++.h>
using namespace std;

int main(){
  int H,W,Q; cin >> H >> W >> Q;
  for(int i = 0; i < Q; i++){
    int k,f; cin >> k >> f;
    if(k == 1){
      cout << W * f << endl;
      H -= f;
    }
    if(k == 2){
      cout << H * f << endl;
      W -= f;
    }
  }
}
