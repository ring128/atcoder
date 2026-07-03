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

int main(){
    ios::sync_with_stdio(false);
    int A; ci(A);
    vector<int> V{A/1000, A/100%10, A/10%10, A%10};
    fo(b, 0, 1 << 3){
        vector<char> c(3);
        int sum = V[0];
        fo(i, 0, 3){
            if(b & (1 << i)){
                sum += V[i+1];
                c[i] = '+';
            }
            else {
                sum -= V[i+1];
                c[i] = '-';
            }
        }
        if(sum == 7){
            fo(i, 0, 7){
                if(i % 2 == 0) cout << V[i/2];
                else cout << c[i/2];
            }
            cout << "=7\n";
            return 0; 
        } 
    }
}