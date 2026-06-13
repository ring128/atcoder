#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(char c : s){
      if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0'){
          cout << c;
      }
  }
  cout << "\n";
}
