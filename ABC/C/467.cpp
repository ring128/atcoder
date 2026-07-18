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
    int N,M; ci(N,M);
    vector<int> A(N);
    vector<int> B(N-1);
    int ansa{};
    int ansb = 1;
    vector<bool> tf(N-1);

    rep(i, 0, N) ci(A[i]);
    rep(i, 0, N-1) ci(B[i]);

    rep(i, 0, N-1){
        if((A[i] + A[i+1]) % M != B[i] % M){
            tf[i] = true;
        }
    }
    rep(i, 0, N-1){
        if(tf[i]){
            tf[i] = !tf[i];
            if(i != N-2) tf[i+1] = !tf[i+1];
            ansa++;
        }
    }

    A[0] = (A[0] + 1) % M;
    rep(i, 0, N-1){
        if((A[i] + A[i+1]) % M != B[i] % M){
            A[i+1] = (A[i+1] + 1) % M;
            ansb++;
        }
    }
    cout << min(ansa, ansb) << '\n';
}