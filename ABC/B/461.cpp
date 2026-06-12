#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> a(N + 1);
  for(int i = 1; i <= N; i++) cin >> a[i];
  vector<int> b(N + 1);
  for(int i = 1; i <= N; i++) cin >> b[i];
  
  for(int i = 1; i <= N; i++){
    if(a[b[i]] != i){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
