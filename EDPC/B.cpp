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
    int N, K; ci(N, K);
    vector<ll> dp(N, 1e18);
    dp[0] = 0;
    vector<int> h(N);
    rep(i, 0, N) ci(h[i]);
    
    rep(i, 0, N){
        rep(j, 0, i){
            if(j == K) break;
            dp[i] = min(dp[i], dp[i-j-1] + abs(h[i-j-1] - h[i]));
        }
    }

    cout << dp[N-1] << '\n';
}