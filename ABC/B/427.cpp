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

void sump(int N, int& sum){
    sum += N % 10;
    if(N > 9) sump(N / 10, sum); 
}
int main(){
    ios::sync_with_stdio(false);
    int N; ci(N);
    int mo = 1;

    fo(i, 2, N+1){
        int sum{};
        sump(mo, sum);
        mo += sum;
    }
    cout << mo << '\n';
}