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
using i128 = __int128_t;
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
    int T; ci(T);

    rep(i, 0, T){
        ll N, H; ci(N,H);
        pair<ll,ll> h = {H,H};
        ll nt{};
        bool tf{};

        rep(j, 0, N){
            ll t,l,u; ci(t,l,u);
            h = {h.first-t+nt, h.second+t-nt};

            if((h.first > u && h.second < l) || h.second < l || h.first > u) tf = true;

            h = {max(h.first, l), min(h.second, u)};
            nt = t;
        }
        cout << ((!tf) ? "Yes\n" : "No\n");
    }
}