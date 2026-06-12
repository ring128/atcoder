#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<vector<int>> a;
  
  for(int i = 1; i <= N; i++){
    int L; cin >> L;
    a.push_back(vector<int>());
    for(int j = 1; j <= L; j++){
      int n; cin >> n;
      a[i - 1].push_back(n);
    }
  }
  
  int X,Y; cin >> X >> Y;
  cout << a[X - 1][Y - 1] << endl;
}
