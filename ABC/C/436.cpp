#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N,M; cin >> N >> M;
  long long cnt;
  
  set<pair<long long, long long>> used;
  for (long long i = 0; i < M; i++) {
    long long A, B;
    cin >> A >> B;
    if (!used.count({A-1, B-1}) && !used.count({A-1, B}) && !used.count({A, B-1}) && !used.count({A, B})){
      used.insert({A-1, B-1}); used.insert({A-1, B}); used.insert({A, B-1}); used.insert({A, B});
      cnt++;
    }
  }
  cout << cnt << endl;
}
