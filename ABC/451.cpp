#include <bits/stdc++.h>
using namespace std;

int main(){
  int Q;
  cin >> Q;

  multiset<long long> t;
  int ans = 0;

  for(int i = 0; i < Q; i++){
    long long a,b;
    cin >> a >> b;

    if(a == 1){
      t.insert(b);
      ans++;
    }
    else{
      auto it = t.upper_bound(b);
      while(t.begin() != it){
        t.erase(t.begin());
        ans--;
      }
    }
    cout << ans << endl;
  }
}
