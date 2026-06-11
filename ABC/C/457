#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N,K; cin >> N >> K;
  vector<vector<int>> a(N);
  for(int i = 0; i < N; i++){
    int L; cin >> L;
    for(int j = 0; j < L; j++){
      int LN; cin >> LN; a[i].push_back(LN);
    }
  }
  int ans = 0; long long count = 1;
  for(int i = 0; i < N; i++){
    long long f; cin >> f;
    if(f * int(a[i].size()) + count - 1 < K) count += f * int(a[i].size());
    else{
      ans = a[i][(K - count) % int(a[i].size())];
      break;
    }  
  }
  
  cout << ans << endl;
}
