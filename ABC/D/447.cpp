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
    string S; cin >> S;
    int a = 0;
    int ab = 0;
    int ans = 0;

    for(char c : S){
        if(c == 'A'){
            a++;
        }
        else if(c == 'B' && a > 0){
            a--;
            ab++;
        }
        else if(c == 'C' && ab > 0){
            ab--;
            ans++;
        }
    }
    cout << ans << '\n';
}