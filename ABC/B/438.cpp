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
    int N, M; cin >> N >> M;
    int cnt;
    int m = 10000;
    vector<char> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];
    vector<char> T(M);
    for(int i = 0; i < M; i++) cin >> T[i];
    for(int i = 0; i < N - M + 1; i++){
        cnt = 0;
        for(int j = 0; j < M; j++){
            int n = (S[i + j] - T[j] + 10) % 10;
            cnt += n;
        }
        if(m > cnt) m = cnt;
    }
        
    cout << m << endl;
}