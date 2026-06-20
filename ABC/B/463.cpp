#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  char X; cin >> X;
  int nx = X - 'A' + 1;
  for(int i = 0; i < N; i++){
    for(int j = 1; j < 6; j++){
      char c; cin >> c;
      if(j == nx && c == 'o'){
        cout << "Yes\n"; return 0;
      }
    }
  }
  cout << "No\n";
}
