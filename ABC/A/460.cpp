#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  int ans = 1;
  while(N % M != 0){
    M = N % M; ans++;
  }
  cout << ans << endl;
}
