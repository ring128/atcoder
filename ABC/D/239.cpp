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
bool isP(long long N){
    if(N < 2) return false;
    for(long long i = 2; i <= N / i; i++){
        if(N % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    int A, B, C, D; ci(A, B, C, D);
    fo(i, A, B+1){
        bool tf = false;
        fo(j, C, D+1){
            if(isP(i+j)){
                tf = false;
                break;
            }    
            tf = true;
        }
        if(tf){
            cout << "Takahashi" << '\n';
            return 0;
        }    
    }
    cout << "Aoki" << '\n';
}