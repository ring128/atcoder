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
    int H, W; cin >> H >> W;
    vector<string> c(H);
    for(int i = 0; i < H; i++){
        string s; cin >> c[i];
    }    

     while(count(c.front().begin(), c.front().end(), '#') == 0){
        c.erase(c.begin());
    }

    while(count(c.back().begin(), c.back().end(), '#') == 0){
        c.pop_back();
    }

    while(true){
        bool w = true;
        for(const auto& row : c){
            if(row.front() == '#') w = false;
        }
        if(!w) break;
        for(auto& r : c){
            r.erase(r.begin());
        }
    }

    while(true){
        bool w = true;

        for(const auto& row : c){
            if(row.back() == '#') w = false;
        }

        if(!w) break;

        for(auto& r : c){
            r.pop_back();
        }
    }

    for(const auto& row : c){
        cout << row << "\n";
    }
}