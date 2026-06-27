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

int main(){
    int H, W, N; cin >> H >> W >> N;
    vector<vector<int>> g(H,vector<int>(W));
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j) cin >> g[i][j];
    }
    int A;
    vector<int> u(N);
    for(int i = 0; i < N; ++i) cin >> u[i];
    int cnt;
    for(auto& hw : g){
        cnt = 0;
        for(auto& w : hw){
            for(auto& p : u){
                if(w == p) cnt++;
            }
        }
        A = max(A, cnt);
    }
    cout << A << endl;
    return 0;
}