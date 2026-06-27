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
    ll N, M; cin >> N >> M;
    vector<vector<pair<ll, ll>>> c(M + 1);
    map<ll, ll> cc;
    ll k;
    for(int i = 0; i < N; i++){
        ll A,D,B; cin >> A >> D >> B;
        if(cc[A] == 0) k++;
        cc[A]++;
        if(A != B) c[D].push_back({A, B});
    }
    for(int i = 1; i <= M; i++){
        for(const auto& p :c[i]){
            cc[p.first]--;
            if(cc[p.first] == 0) k--;
            if(cc[p.second] == 0) k++; 
            cc[p.second]++;
        }
        cout << k << endl;
    }
}