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

int k(int N, int sum){
    if(N <= 1) return sum;
    return k(N - 1, sum * N);
}

int ss(vector<int> v, vector<int> n, int N, int ns, int i){
    if(i == N-1) return ns;

    auto it = find(all(n), v[i]);
    n.erase(it);
    auto itt = ub(all(n), v[i+1]-1);
    if(itt != n.end()) ns += distance(n.begin(), itt) * k(N-i-2, 1);

    i++;
    return ss(v,n,N,ns,i);
}

int main(){
    ios::sync_with_stdio(false);
    int N; ci(N);
    vector<int> P(N);
    rep(i, 0, N) ci(P[i]);
    vector<int> Q(N);
    rep(i, 0, N) ci(Q[i]);
    int ans{};
    vector<int> n(N);
    rep(i, 0, N) n[i] = i+1;
    
    ans += (Q[0]-P[0]) * k(N-1,1);

    ans += ss(Q, n, N, 0, 0) - ss(P, n, N, 0, 0) - 1;
    cout << max(ans, 0) << '\n';
}