#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  bool ps = false;
  int o = 0;
  for(int i = 0; i < N; i++){
  int Q; cin >> Q;
  if(Q == 1) o++;
  else if(Q == 2){
    if(o != 0) o--;
  }
  else if(Q == 3) ps = !ps;
  if(o >= 3 && ps == true) cout << "Yes" << endl;
  else cout << "No\n";
  }
}
