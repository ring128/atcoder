#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<string> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];
  vector<int> ans;
  
  for(int i = 0; i < N; i++){
    if(a[i][0] == 'a' || a[i][0] == 'b' || a[i][0] == 'c') ans.push_back(2);
    else if(a[i][0] == 'd' || a[i][0] == 'e' || a[i][0] == 'f') ans.push_back(3);
    else if(a[i][0] == 'g' || a[i][0] == 'h' || a[i][0] == 'i') ans.push_back(4);
    else if(a[i][0] == 'j' || a[i][0] == 'k' || a[i][0] == 'l') ans.push_back(5);
    else if(a[i][0] == 'm' || a[i][0] == 'n' || a[i][0] == 'o') ans.push_back(6);
    else if(a[i][0] == 'p' || a[i][0] == 'q' || a[i][0] == 'r' || a[i][0] == 's') ans.push_back(7);
    else if(a[i][0] == 't' || a[i][0] == 'u' || a[i][0] == 'v') ans.push_back(8);
    else if(a[i][0] == 'y' || a[i][0] == 'w' || a[i][0] == 'x' || a[i][0] == 'z') ans.push_back(9);
  }
  for(int i = 0; i < N; i++) cout << ans[i];
  cout << "\n";
}
