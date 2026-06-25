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

int ds;
int bc = 2027;
vector<int> al;
void k (int N){
    ds += (N % 10) * (N % 10);
    if(N > 9){
        k(N/10);
    }
}
void s (int N){
    ds = 0;
    k(N);
    if(ds == 1){
        cout << "Yes\n";
        return;
    }    
    for(auto p : al){
        if(p == ds){
            cout << "No\n";
            return;
        }    
    }    
    bc = ds;
    al.push_back(N);
    s(ds);
}

int main(){
    int N; cin >> N;
    s(N);
}