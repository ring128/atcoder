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
    int N, M; cin >> N >> M;
    vector<vector<int>> k(M);
    fo(i,0, N){
        int A, B; cin >> A >> B;
        k[A-1].pb(B);
    }
    fo(i, 0, M){
        int sum = 0;
        int cnt = 0;
        for(auto& p : k[i]){
            sum += p;
            cnt++;
        }
        cout << setprecision(7) << (double)sum / cnt << '\n';
    }
}