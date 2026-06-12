#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> x(N);
  bool tf = true;
  int s = 0;
  
  for(int i = 0; i < N; i++){
    cin >> x[i];
  }
  while(true){
  for(int i = 0; i < N; i++){
    
    if(x[i] % 2 == 1){
      tf = false;
    }
  }
  if(tf == false)break;
  if(tf == true){
    for(int i = 0; i < N; i++){
      cin >> x[i];
      x[i] /= 2;
      
    }
  }
  s++;
  }
  cout << s << endl;
}
