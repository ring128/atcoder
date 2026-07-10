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
    ll N; ci(N);
    vector<ll> h(N);
    rep(i, 0, N) ci(h[i]);
    
    vector<ll> dp(N, 1e18);
    dp[0] = 0;

    rep(i, 1, N){
        dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i]);
        if(i > 1) dp[i] = min(dp[i-2] + abs(h[i-2] - h[i]), dp[i]);
    }
    cout << dp[N-1] << '\n';
}