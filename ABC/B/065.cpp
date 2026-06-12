#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> bt(N + 1);
  for(int i = 1; i <= N; i++){
    cin >> bt[i];
  }

  int n = 1;
  int ans = 0;
  for(int j = 1; j <= N; j++){
    n = bt[n];
    if(n == 2){
      ans = j;
      break;
    }
  }
  if(n == 2) cout << ans << endl;
  else cout << "-1" << endl;
}
