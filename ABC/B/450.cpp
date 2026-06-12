#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<vector<long long>> a(N);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N - i - 1; j++){
      long long c; cin >> c; a[i].push_back(c);
    }
  }
  
  for(int i = 0; i < N - 2; i++){
    for(int j = 0; j < N - i - 2; j++){
      for(int  k = 0; k < a[j + i + 1].size(); k++){
        if(a[i][j] + a[j + i + 1][k] < a[i][j + k + 1]){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
