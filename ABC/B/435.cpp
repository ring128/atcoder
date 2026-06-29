#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <tuple>
#include <array>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define fo(i, a, b) for(int i = (a); i < (b); i++) 
#define pb push_back

int main(){
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> v(5);
  fo(i, 0, N) cin >> v[i];
  int a;
  int sum = 0;
  int ans = 0;
  fo(i, 0, N-1){
    a = i + 1;
    fo(j, a, N){
        bool tf = true;
        sum = 0;
        fo(k, i, j+1){
            sum += v[k];
        }
        fo(k, i, j+1){
            if(sum % v[k] == 0){
                tf = false;
                break;
            }    
        }
        if(tf) ans++;
    }
  }
  cout << ans << '\n';
}