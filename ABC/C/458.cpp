#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  long long ans = 0; 
  for(int i = 0; i < S.size(); i++){
    if(S[i] == 'C') ans += min(i + 1, (int)(S.size() - i));
  }
  cout << ans << endl;
}
