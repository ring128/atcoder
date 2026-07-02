#include<bits/stdc++.h>
using namespace std;
int main(){
  int P, Q, X, Y; cin >> P >> Q >> X >> Y;
  cout << ((P <= X && X < P + 100) && (Q <= Y && Y < Q + 100) ? "Yes" : "No") << '\n';
}