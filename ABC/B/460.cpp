#include<bits/stdc++.h>
using namespace std;

int main(){
  int T; cin >> T;
  
  for(int i = 0; i < T; i++){
    long long A,B,S,C,D,s; cin >> A >> B >> S >> C >> D >> s;
    if(abs(S - s) * abs(S - s) <= abs(A - C) * abs(A - C) + abs(B - D) * abs(B - D) && (S+s)*(S+s) >= abs(A - C) * abs(A - C) + abs(B - D) * abs(B - D)) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
