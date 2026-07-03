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

void su(string S, ll& sum, ll num){
    fo(i, 1, S.size() + 1){
        ll x = stoll(S.substr(0, i));
        if(i == (int)S.size()){
            sum += num + x;
        }
        else{
            su(S.substr(i), sum, num + x);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    string S; cin >> S;
    ll sum = 0;
    su(S, sum, 0);
    cout << sum << endl;
}