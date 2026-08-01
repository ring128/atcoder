#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int a, b;
    cin >> a >> b;

    vector<int> aa, bb;
    bool ia = false, ib = false;
    set<pair<int, int>> ans;

    for (int i = 0; i < M - 1; i++) {
        int A, B;
        cin >> A >> B;

        if (A != a && B != a) {
            if (!ia) {
                aa = {A, B};
                sort(aa.begin(), aa.end());
                aa.erase(unique(aa.begin(), aa.end()), aa.end());
                ia = true;
            } else {
                for (auto it = aa.begin(); it != aa.end();) {
                    if (*it != A && *it != B) {
                        it = aa.erase(it);
                    } else {
                        ++it;
                    }
                }
            }
        }

        if (A != b && B != b) {
            if (!ib) {
                bb = {A, B};
                sort(bb.begin(), bb.end());
                bb.erase(unique(bb.begin(), bb.end()), bb.end());
                ib = true;
            } else {
                for (auto it = bb.begin(); it != bb.end();) {
                    if (*it != A && *it != B) {
                        it = bb.erase(it);
                    } else {
                        ++it;
                    }
                }
            }
        }
    }

    auto add = [&](int x, int y) {
        if (x == y) return;
        if (x > y) swap(x, y);
        ans.insert({x, y});
    };

    if (ia) {
        for (int p : aa) add(a, p);
    } else {
        for (int p = 1; p <= N; p++) add(a, p);
    }

    if (ib) {
        for (int p : bb) add(b, p);
    } else {
        for (int p = 1; p <= N; p++) add(b, p);
    }

    cout << ans.size() << '\n';
}