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

    vector<int> wei(N);
    vector<int> val(N);

    rep(i, 0, N) ci(wei[i], val[i]);

    vector<ll> dp(W+1);

    for(int i = 0; i < N; i++){
        for(int j = W; j >= wei[i]; j--){
            dp[j] = max(dp[j], dp[j - wei[i]] + val[i]);
        }
    }

    cout << dp[W] << '\n'; 
}