#include<bits/stdc++.h>
using namespace std;

void k(int N);
int h = 0;

int main(){
  int N,K; cin >> N >> K;
  int ans = 0;
  for(int i = 0; i <= N; i++){
    h = 0;
    k(i);
    if(h == K) ans++;
  }
  cout << ans << endl;
}

void k (int N){
  h += N % 10;
  if(N > 9) k(N / 10);
} 
