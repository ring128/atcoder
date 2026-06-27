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
    string S; cin >> S;
    int e; int w;
    for(auto p : S){
        if('E' == p) e++;
        else if('W' == p) w++;
    }
    if(e > w) cout << "East\n";
    else cout << "West\n";
}