#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W; cin >> H >> W;
  vector<vector<char>> a(H, vector<char>(W));
  for(int i = 0; i < H; i++)
    for(int j = 0; j < W; j++) cin >> a[i][j];
  int count = 0;  
    
  for(int h1 = 0; h1 < H; h1++)
  for(int h2 = h1; h2 < H; h2++)
  for(int w1 = 0; w1 < W; w1++)
  for(int w2 = w1; w2 < W; w2++){
    bool tf = true;
    for(int i = h1; i <= h2 && tf; i++)
    for(int j = w1; j <= w2 && tf; j++)
        if(a[i][j] != a[h1+h2-i][w1+w2-j]) tf = false;
    if(tf) count++;
  }
  cout << count << endl;
}
