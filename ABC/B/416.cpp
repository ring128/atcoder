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
    string S; ci(S);
    bool tf = true;

    rep(i, 0, S.size()){
        if(S[i] == '.') tf = true;
        if(S[i] == '#' && i > 0 && tf){
            S[i-1] = 'o';
            tf = false;
        }
        else if(S[i] == '#') tf = false;    
    }
    if(tf) S.back() = 'o';

    cout << S << '\n';
}