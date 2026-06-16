#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> L(N);
  for(int i = 0; i < N; i++) cin >> L[i];
  vector<int> sa(1 << N);
  
  for(int bit = 0; bit < (1 << N); bit++){
    long long x = 1;
    int cnt = 0;
    for(int i = 0; i < N; i++){
      long long nx;
      if((bit >> i) & 1){
        nx = x + 2 * L[i]; 
      }else{
        nx = x - 2 * L[i]; 
      }
      if((x < 0 && nx > 0) || (x > 0 && nx < 0)){
        cnt++;
      }
      x = nx;
    }
    sa[bit] = cnt;
  }
  int ans = 0;
  for(int x : sa){
    ans = max(ans, x);
  }
  cout << ans << endl;
}
