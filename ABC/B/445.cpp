#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string hs;
  vector<string> s(N);
  for(int i = 0; i < N; i++){
    cin >> s[i];
    if(hs.size() < s[i].size()){
      int plu = (s[i] .size() - hs.size()) / 2;
      hs = s[i];
      for(int j = 0; j < i; j++){
        for(int k = 0; k < plu; k++){
          s[j].insert(s[j].begin(), '.');
          s[j].push_back('.');
        }  
      }
    }
    else while(hs.size() > s[i].size()){
      s[i].insert(s[i].begin(), '.');
      s[i].push_back('.');
    }
  }
  for(auto p : s){
    cout << p << endl;
  }
}
