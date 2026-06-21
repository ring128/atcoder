#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  bool tf = false;
  char b; cin >> b;
  if(b == 'o') tf = true;
  if(!tf) cout << b;
  for(int i = 0; i < N - 1; i++){
    char a; cin >> a;
    if(a != 'o') tf = false;
    if(!tf) cout << a;
    else continue;
  }
}
