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
    ll T; ci(T);
    
    rep(i, 0, T){
        ll N, D; ci(N, D);
        vector<ll> A(N); rep(j, 0, N) ci(A[j]);
        vector<ll> B(N); rep(j, 0, N) ci(B[j]);
        queue<ll> q;

        rep(j, 0, N){
            rep(k, 0, A[j]) q.push(j);
            rep(k, 0, B[j]){
                if(!q.empty()){
                    q.pop();
                }
            }    
            while(!q.empty() && q.front() <= j - D){
                q.pop();
            }
        }

        cout << q.size() << '\n';
    }
}