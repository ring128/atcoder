#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N,M; cin >> N >> M;
  map<long long, long long> a;
  for(int i = 0; i < N; i++){
    long long x; cin >> x; a[x]++;
  }
  vector<pair<long long, long long>> v(a.begin(), a.end());
  sort(v.begin(), v.end(), [](auto x, auto y){
    return x.first * x.second > y.first * y.second;
  });
  v.erase(v.begin(), v.begin() + min(M, (long long)v.size()));
  long long ans = 0;
  for(auto x : v) ans += x.first * x.second;
  cout << ans << endl;
}
