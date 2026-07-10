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
    int N; ci(N);
    vector<int> m(N, 0);
    vector<pair<int, bool>> v;
    rep(i, 0, N) v.pb({i+1, true});

    rep(i, 0, N){
        double A; ci(A);
        if(A != -1){
            m[i] = A;
            if(v[A-1].second == true) v[A-1].second = false;
            else{
                cout << "No" << '\n';
                return 0;
            }    
        }

        else if(A > N){
            cout << "No" << '\n';
            return 0;
        }
    }

    queue<int> q{};
    for(const auto& [i, b] : v){
        if(b) q.push(i); 
    }

    cout << "Yes" << '\n';

    rep(i, 0, N){
        if(m[i] == 0){
            int Q = q.front();
            cout << Q << " ";
            q.pop();
        }

        else cout << m[i] << " ";
    }
}