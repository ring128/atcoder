#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  
  map<int,int> a;
  int x;
  while(cin >> x) a[x]++;
  
  bool tf = true;
  for(auto c : a){
    if(c.second > 1){
      tf = false;
      break;
    }  
  }
  if(tf == false) cout << "No" << endl;
  else cout << "Yes" << endl;
  
  tf = true;
  for(int i = 1; i <= M; i++){
    if(a.count(i) == 0){
      tf = false; break;
    }
  }
  if(tf == false) cout << "No" << endl;
  else cout << "Yes" << endl;
}
