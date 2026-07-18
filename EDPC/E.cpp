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
    int N,W; ci(N,W);

    vector<int> w(N);
    vector<int> v(N);

    rep(i, 0, N) ci(w[i], v[i]);
    int sum = accumulate(all(v), 0);

    vector<ll> dp(sum+1, INFINITY);

    rep(i, 0, N){
        for(int val = sum; val >= v[i]; --val){
            dp[val] = min(dp[val], dp[val - v[i]] + w[i]);
        }
    }

    int ans{};
    
    for(int val = sum; val--;){
        if(dp[val] <= W){
            ans = val;
            break;
        }    
    }

    cout << ans << '\n';
}