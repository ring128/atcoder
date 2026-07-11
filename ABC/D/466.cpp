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
    int N, M; ci(N, M);
    set<pair<int, int>> spH;
    set<pair<int, int>> spW;

    rep(i, 0, M){
        int R, C; ci(R, C);

        auto it = spH.lower_bound({R, -1});
        while (it != spH.end() && it->first == R){
            int r = it->first;
            int c = it->second;
            spW.erase({c, r});
            it = spH.erase(it);
        }

        auto ait = spW.lower_bound({C, -1});
        while (ait != spW.end() && ait->first == C){
            int c = ait->first;
            int r = ait->second;
            spH.erase({r, c});
            ait = spW.erase(ait);
        }

        spH.insert({R, C});
        spW.insert({C, R});
    }

    cout << spH.size() << '\n';
}