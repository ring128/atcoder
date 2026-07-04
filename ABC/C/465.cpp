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
    ll N; ci(N);
    vector<char> S(N);
    fo(i, 0, N) ci(S[i]);    
    deque<ll> ans;
    bool vec = false;

    for(int i = 0; i < N; i++){
        if(!vec) ans.push_back(i + 1);
        else ans.push_front(i + 1);
        if(S[i] == 'o') vec = !vec;
    }
    bool tf = false;
    if(!vec){
        for(ll x : ans){
            if(tf) cout << " ";
            cout << x;
            tf = true;
        }
    }
    else{
        for(auto it = ans.rbegin(); it != ans.rend(); it++){
            if(tf) cout << " ";
            cout << *it;
            tf = true;
        }
    }
}