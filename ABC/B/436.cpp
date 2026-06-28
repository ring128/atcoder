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

int main(){
    ios::sync_with_stdio(false);
    int N; cin >> N;
    vector<vector<int>> v(N, vector<int>(N, -1));
    v[0][(N-1) / 2] = 1;
    int r{};
    int k = 1;
    int c = (N-1) / 2;
    fo(i, 0, N*N-1){
        if(v[(r-1+N) % N][(c+1) % N] == -1){
            v[(r-1+N) % N][(c+1) % N] = k + 1;
            r = (r-1+N) % N;
            c = (c+1) % N;
            k++;
        }
        else{
            v[(r+1) % N][c] = k + 1;
            r = (r+1) % N;
            k++;
        }    
    }
    bool tf = false;
    for(const auto& p : v){
        for(const auto& x : p){
            if(tf) cout << " ";
            cout << x;
            tf = true;
        }
        cout << "\n";
        tf = false;
    }
}