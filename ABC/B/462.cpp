#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<pair<int, int>> a; vector<vector<int>> ans(N + 1);
  for(int i = 1; i <= N; i++){
    int K; cin >> K;
    for(int j = 0; j < K; j++){
      int f; cin >> f;
      a.push_back({i, f});
    }
  }
  for(auto x : a){
    ans[x.second].push_back(x.first);
  }
  
  for(int i = 1; i <= N; i++){
    cout << ans[i].size();
    for(auto x : ans[i]){
      cout << " " << x;
    }
    cout << "\n";
  }
}
