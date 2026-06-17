#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,K; cin >> N >> K;
  vector<int> nk;
  bool tf = true;
  for(int i = 0; i < N; i++){
    int L; cin >> L;
    bool c = false;
    for(int j = 0; j < L; j++){
      int x; cin >> x;
      tf = true;
      if(c) continue;
      for(auto p : nk){
        if(x == p){
          tf = false;
        }
      }
      if(tf == true){
        nk.push_back(x);
        cout << x << endl;
        c = true;
      }
    }
    if(tf == false){
      cout << '0' << endl;
    }
  }
}
