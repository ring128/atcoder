#include<bits/stdc++.h>
using namespace std;

int main(){
  int A,B; cin >> A >> B;
  vector<int> a(A); for(int i = 0; i < A; i++) cin >> a[i];
  vector<int> b(B); for(int i = 0; i < B; i++) cin >> b[i];
  int count = 0;
  
  sort(a.rbegin(), a.rend()); sort(b.rbegin(), b.rend());
  for(int i = 0; i < A;){
    for(int j = 0; j < B;){
      if(b[j] <= a[i] * 2){
        count++; i++; j++;
      }
      else j++;
      if(i == A || j == B){
        cout << count << endl;
        return 0;
      }  
    }
  }
}
