#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, D;
    cin >> M >> D;

    pair<int, int> a = {M, D};

    set<pair<int, int>> ok = {
        {1, 7}, {3, 3}, {5, 5}, {7, 7}, {9, 9}
    };

    if(ok.count(a)) cout << "Yes\n";
    else cout << "No\n";
}