#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<pair<int, int>> a(N + 1);
    for(int i = 1; i <= N; i++){
        int S; cin >> S;
        a[i] = {i, S} ;
    }
    sort(a.begin(), a.end(), [](auto a, auto b){
        return a.second < b.second;
    });

    bool f = false;
    int cnt;
    for(auto p : a){
        if(f) cout << " ";
        if(p.first == 0) continue;
        cout << p.first;
        f = true;
        cnt++;
        if(cnt > 2) return 0;
    }
}