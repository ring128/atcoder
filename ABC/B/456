#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(6); for(int i = 0; i < 6; i++) cin >> a[i];
  vector<int> b(6); for(int i = 0; i < 6; i++) cin >> b[i];
  vector<int> c(6); for(int i = 0; i < 6; i++) cin >> c[i];
  int count = 0;
  
  for(int i = 0; i < 6; i++){
   for(int j = 0; j < 6; j++){
     for(int k = 0; k < 6; k++){
       if((a[i] == 4 && b[j] == 5 && c[k] == 6) || (a[i] == 4 && b[j] == 6 && c[k] == 5) || (a[i] == 5 && b[j] == 4 && c[k] == 6) || (a[i] == 5 && b[j] == 6 && c[k] == 4) || (a[i] == 6 && b[j] == 4 && c[k] == 5) || (a[i] == 6 && b[j] == 5 && c[k] == 4)) count++;
     }
   }
  }
  cout << (double)count / 216 << endl;
}
