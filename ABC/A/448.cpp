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

int main(){
    int N, X; cin >> N >> X;
    for(int i = 0; i < N; i++){
        int a; cin >> a;
        if(a < X){
            X = a;
            cout << "1\n"; 
        }
        else cout << "0\n";
    }
}