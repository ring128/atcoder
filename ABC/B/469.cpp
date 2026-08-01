#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] != 'x') continue;
        if (N == 1) {
            cnt++;
        } else if (i == 0) {
            if (S[1] == 'x') cnt++;
        } else if (i == N - 1) {
            if (S[N - 2] == 'x') cnt++;
        } else if (S[i - 1] == 'x' && S[i + 1] == 'x') {
            cnt++;
        }
    }
    cout << cnt << '\n';
}