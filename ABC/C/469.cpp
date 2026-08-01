#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    vector<int> x;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'x') x.push_back(i + 1);
    }

    for (int i = 1; i <= N; i++) {
        int ans = (i <= (int)x.size() ? x[i - 1] : N);
        cout << ans << (i == N ? '\n' : ' ');
    }
}