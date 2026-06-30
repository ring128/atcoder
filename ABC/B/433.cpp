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
    vector<int> v(N);
    fo(i, 0, N) cin >> v[i];
    fo(i, 0, N){
        int w = -1;
        fo(j, 0, i){
            if(v[j] > v[i]) w = j + 1;
        }
        cout << w << '\n';
    }
}