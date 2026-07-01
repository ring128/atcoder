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

vector<int> v;
void vo (int N){
    v.pb(N % 10);
    if(N >= 10) vo(N / 10);
}

int te(int N, int v){
    fo(i, 0, v){
        N *= 10;
    }
    return N;
}

int main(){
    ios::sync_with_stdio(false);
    int N; cin >> N;
    vo(N);
    sort(v.begin(), v.end());
    int ans = 0;
    if(v[0] == 0){
        auto it = upper_bound(v.begin(), v.end(), 0);
        swap(v[0], *it);
    }

    fo(i, 0, v.size()){
        ans += te(v[i], (int)v.size() - i - 1);
    }
    cout << ans << '\n';
}