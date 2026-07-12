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
    int H, W; ci(H, W);
    vector<vector<char>> v(H, vector<char>(W));
    queue<pair<int, int>> q;
    rep(i, 0, H){
        rep(j, 0, W){
            char c; ci(c);
            v[i][j] = c;
            if(c == '#') q.push({i, j});
        }
    }

    while(!q.empty()){
        int cnt{};
        auto[x,y] = q.front();
        q.pop();

        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, -1, 0, 1};

        rep(i, 0, 4){
            if(x+dx[i] >= 0 && x+dx[i] < H && y+dy[i] >= 0 && y+dy[i] < W){
                if(v[x+dx[i]][y+dy[i]] == '#'){
                    cnt++;
                }
            }    
        }

        if(!(cnt == 2 || cnt == 4)){
            cout << "No\n";
            return 0;
        }    
    }

    cout << "Yes\n";
}