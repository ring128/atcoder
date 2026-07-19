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
using i128 = __int128_t;
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
    string S; ci(S);
    double z{};

    rep(i, 0, (int)S.size() - 1){
        rep(j, 3, (int)S.size() - i + 1){
            double t{};
            if(S[i] == 't' && S[i+j-1] == 't'){
                rep(k, 0, j-2){
                    if(S[i+k+1] == 't') t++;
                }

                z = max(z, t / (j-2));
            }
        }
    }

    cout << fixed << setprecision(15) << z << '\n';
}