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

int in (string S){
    if(S == "Ocelot") return 1;
    else if(S == "Serval") return 2;
    else if(S == "Lynx") return 3;
}

int main(){
    ios::sync_with_stdio(false);
    string X,Y; ci(X,Y);

    cout << ((in(X) >= in(Y)) ? "Yes" : "No") << '\n';
}