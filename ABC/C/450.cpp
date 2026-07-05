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
    int H, W; ci(H,W);
    char gr[H][W];
    bool t[H][W]; 
    int cnt{};
    fo(i, 0, H){
        fo(j, 0, W) ci(gr[i][j]);
    }
    queue<pair<int, int>> q;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    fo(i, 1, H - 1){
        fo(j, 1, W - 1){
            if(gr[i][j] == '.' && !t[i][j]){
                queue<pair<int, int>> q;
                q.push({i, j});
                t[i][j] = true;
                bool tf = false;

                while(!q.empty()){
                    auto [x, y] = q.front();
                    q.pop();

                    if(x == 0 || x == H - 1 ||
                       y == 0 || y == W - 1){
                        tf = true;
                    }

                    fo(k, 0, 4){
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if(nx < 0 || nx >= H ||
                           ny < 0 || ny >= W){
                            continue;
                        }

                        if(gr[nx][ny] == '.' && !t[nx][ny]){
                            t[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
                if(!tf) cnt++;
            }
        }
    }
    cout << cnt << '\n';
}