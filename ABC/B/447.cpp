#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  map<char, int> a;
  for(auto p : s){
    a[p]++;
  }
  int ms = max_element(a.begin(), a.end(), [](auto a, auto b){
    return a.second < b.second;
  })->second;
  
  for(auto it = a.begin(); it != a.end();){
    if(it->second == ms) it = a.erase(it);
    else it++;
  }
  for(int i = 0; i < s.size(); i++){
    if(a.count(s[i]) == 0){
        s.erase(s.begin() + i);
        i--;
    }
  }
  cout << s << endl;
}
