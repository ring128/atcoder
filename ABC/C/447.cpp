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
    string S,T; ci(S, T);
    int sum{};
    int Sp{}; int Tp{};

    rep(i, 0, max(S.size(), T.size())){
        if(i + Sp >= (int)S.size()){
            rep(j, i + Tp, (int)T.size()){
                if(T[j] != 'A'){
                    cout << "-1\n";
                    return 0;
                }
                sum++;
            }
            cout << sum << '\n';
            return 0;
        }

        else if(i + Tp >= (int)T.size()){
            rep(j, i + Sp, (int)S.size()){
                if(S[j] != 'A'){
                    cout << "-1\n";
                    return 0;
                }
                sum++;
            }
            cout << sum << '\n';
            return 0;
        }

        else if(S[i+Sp] != T[i+Tp] && (S[i+Sp] == 'A' || T[i+Tp] == 'A')){
            (S[i+Sp] == 'A') ? Sp++ : Tp++;
            sum++;
            --i;
        }

        else if (S[i+Sp] != T[i+Tp]){
            cout << "-1\n";
            return 0;
        }    
    }

    cout << sum << '\n';
}