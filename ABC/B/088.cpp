#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int a = 0; int b = 0;
  vector<int> s(N);
  for(int i = 0; i < N; i++) cin >> s[i];
  sort(s.begin(), s.end(), greater<int>());
  
  for(int i = 0; i < N; i++){
    cin >> s[i];
    if(i % 2 == 0) a += s[i];
    else b += s[i];
  }
  cout << a - b << endl;
}
