#include <bits/stdc++.h>
using namespace std;

int main(){
  int T,X; cin >> T >> X;
  vector<vector<int>> a;
  
  int fm; cin >> fm;
  a.push_back({0,fm});
  
  for(int i = 1; i <= T; i++){
    int m; cin >> m;
    if(abs(a.back()[1] - m) >= X) a.push_back({i,m});
  }
  
  for(auto b : a){
    bool first = true;
    for(auto c : b){
      if(!first) cout << " ";
      cout << c;
      first = false;
    }
    cout << "\n";
  }
}
