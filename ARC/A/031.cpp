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

int bcnt{};

void bcn(vector<vector<pair<char, bool>>> &B, int i, int j){
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    if(i < 0 || i > 9 || j < 0 || j > 9) return;
    fo(d, 0, 4){
        int nx = i + dx[d];
        int ny = j + dy[d];
        if(nx < 0 || nx > 9 || ny < 0 || ny > 9) continue;
        if(B[nx][ny].first == 'o' && !B[nx][ny].second){
            B[nx][ny].second = true;
            bcn(B, nx, ny);
            bcnt++;
        }
    }
}

bool tf(vector<vector<pair<char, bool>>> A, int i, int j, int cnt){
    A[i][j].first = 'o';
    A[i][j].second = true;
    vector<vector<pair<char, bool>>> B;
    B = A;
    bcnt = 0;
    bcn(B, i, j);
    if(cnt == bcnt) return true;
    else return false;
}

int main(){
    ios::sync_with_stdio(false);
    vector<vector<pair<char, bool>>> A(10, vector<pair<char, bool>> (10));
    int cnt{};
    for(auto& p : A){
        for(auto& [q, l] : p){
            cin >> q;
            if(q == 'o') cnt++;
        }    
    }
    fo(i, 0, 10){
        fo(j, 0, 10){
            if(A[i][j].first == 'o') continue;
            if(tf(A, i, j, cnt)){
                cout << "YES\n";
                return 0;
            }   
        }
    }
    cout << "NO\n";
}