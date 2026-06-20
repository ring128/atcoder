#include<bits/stdc++.h>
using namespace std;

int main(){
  int A,B; cin >> A >> B;
  int b; int cnt;
  while(b < B){
    b += A;
    A++; cnt++;
  }
  cout << cnt - 1 << endl;
}
