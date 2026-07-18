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
#define rep(i, a, b) for(int i = (a); i < (b); i++) 
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define lb lower_bound
#define ub upper_bound
template<class... T>
void ci(T&... x){
    (cin >> ... >> x);
}   

int main(){
    ios::sync_with_stdio(false);
    int N; ci(N);
    vector<int> A(N, 0);
    vector<int> B(N, 0);
    vector<int> C(N, 0);

    rep(i, 0, N) ci(A[i],B[i],C[i]);

    vector<int> adp(N);
    vector<int> bdp(N);
    vector<int> cdp(N);
    adp[0] = A[0]; bdp[0] = B[0]; cdp[0] = C[0]; 

    rep(i, 1, N){
        adp[i] = max(bdp[i-1], cdp[i-1]) + A[i];
        bdp[i] = max(adp[i-1], cdp[i-1]) + B[i];
        cdp[i] = max(adp[i-1], bdp[i-1]) + C[i];
    }
    
    cout << max({adp[N-1], bdp[N-1], cdp[N-1]}) << '\n';
}