#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  if(N < 100) cout << "00" << endl;
  else if(100 <= N && N <= 5000){
    if(100 <= N && N < 1000) cout << "0" << N / 100 << endl;
    else cout << N / 100 << endl;
  }
  else if(6000 <= N && N <= 30000) cout << N / 1000 + 50 << endl;
  else if(35000 <= N && N <= 70000) cout << (N / 1000 - 30) / 5 + 80 << endl;
  else if(70000 < N) cout << "89" << endl;
}
