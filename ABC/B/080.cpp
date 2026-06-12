#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int x = N;
  int M = N;
  x = x % 10;
  
  while(M > 0){
    M = M / 10;
    x += M % 10;
  }
  
  if(N % x == 0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
