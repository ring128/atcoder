#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N,T; cin >> N >> T;
  long long lt = 0;
  long long tt = 0;
  for(int i = 0; i < N; i++){
    long long t; cin >> t;
    if(lt == 0){
      lt = t;
      tt = t;
    } 
    else if(t - lt > 100){
      tt += t - lt - 100; lt = t;
    }
  }
  if(lt == 0) tt += T;
  else if(T - lt > 100) tt += T - lt - 100;
  cout << tt << endl;
}
