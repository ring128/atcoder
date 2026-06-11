#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  map<int,int> a,b;
  
  for(int i = 0; i < N; i++){
    int x,y; cin >> x >> y;
    a[x]++; b[y]++;
  }
  
  for(int i = 1; i <= M; i++) cout << b[i] - a[i] << endl;
}
