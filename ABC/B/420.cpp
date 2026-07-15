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
    vector<vector<char>> v(M, vector<char>(N));
    map<int, int> m;
    
    rep(i, 0, N){
        rep(j, 0, M){
            ci(v[j][i]);
        }
    }

    rep(i, 0, M){
        vector<int> z{}; vector<int> o{};
        rep(j, 0, N){
            if(v[i][j] == '1') o.pb(j);
            else z.pb(j);
        }

        if(o.size() == 0 || z.size() == 0){
            rep(i, 0, N) m[i]++;
        }

        else if(o.size() > z.size()){
            for(const auto& p : z){
                m[p]++;
            }
        }

        else{
            for(const auto& p : o){
                m[p]++;
            }
        }
    }

    int ma{};

    for(auto& [p, q] : m){
        ma = max(q, ma);
    }

    for(auto& [p, q] : m){
        if(q == ma) cout << p + 1 << " ";
    }
}