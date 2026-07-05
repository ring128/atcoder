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
#define fo(i, a, b) for(int i = (a); i < (b); i++) 
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
    string S; ci(S);
    map<string, int> m;
    fo(i, 0, N - K + 1){
        string x = S.substr(i, K);
        m[x]++;
    }

    int mx = 0;
    for(const auto& [str, cnt] : m){
        mx = max(mx, cnt);
    }
    
    vector<string> ss;
    for(const auto& [str, cnt] : m){
        if(mx == cnt) ss.pb(str);
    }

    cout << mx << '\n';
    for(const auto& p : ss) cout << p << " ";
}