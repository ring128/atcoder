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
    int N, Q; ci(N, Q);
    vector<pair<ll, ll>> A(N);

    rep(i, 0, N){
        int AA; ci(AA);
        A[i] = {AA, i};
    }

    sort(all(A));

    rep(i, 0, Q){
        int K; ci(K);
        set<ll> s;
        rep(j, 0, K){
            int a; cin >> a;
            s.insert(a - 1);
        }    
        for(const auto& [p, q] : A){
            if(!s.count(q)){
                cout << p << '\n';
                break;
            }
        }
    }
}