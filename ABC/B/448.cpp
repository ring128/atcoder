#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  int ans = 0;
  vector<int> c(M + 1);
  for(int i = 1; i <= M; i++) cin >> c[i];
  for(int i = 0; i < N; i++){
    int A,B; cin >> A >> B;
    if(c[A] <= B){
      ans += c[A];
      c[A] = 0;
    }  
    else{
      c[A] -= B;
      ans += B;
    }  
  }
  cout << ans << endl;
}
