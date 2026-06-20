#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N; cin >> N;
  map<long long, long long> t;
  for(long long i = 0; i < N; i++){
    long long A,B; cin >> A >> B;
    t[B] = max(t[B], A);
  }
  long long mx = 0;
  for (auto it = t.rbegin(); it != t.rend(); it++) {
    mx = max(mx, it->second);
    it->second = mx;
  }
  int Q; cin >> Q; 
  for(long long i = 0; i < Q; i++){
    long long S; cin >> S;
    for(auto it = t.upper_bound(S); it != t.end(); it++){
      cout << it->second << endl; break;
    }
  }
}
