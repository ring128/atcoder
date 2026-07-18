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
using namespace std;
using ll = long long;
using i128 = __int128_t;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll A, B, C, D, E, F, G, H;
        cin >> A >> B >> C >> D >> E >> F >> G >> H;

        i128 a1 = 2 * (i128)(C - A);
        i128 b1 = 2 * (i128)(D - B);
        i128 c1 = (i128)C * C + (i128)D * D - (i128)A * A - (i128)B * B;

        i128 a2 = 2 * (i128)(G - E);
        i128 b2 = 2 * (i128)(H - F);
        i128 c2 = (i128)G * G + (i128)H * H - (i128)E * E - (i128)F * F;

        if (a1 * b2 - a2 * b1 != 0) {
            cout << "Yes\n";
        }
        else if (a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}