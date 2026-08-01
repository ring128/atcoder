#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::set<int> s;
    std::vector<int> v(N);
    for(int &p : v)std::cin >> p;
    std::sort(v.rbegin(), v.rend());
    int l = v[0] + v[N - 1];
    bool ok = N % 2 == 0;
    for (int i = 0; ok && i < N / 2; i++)
        if (l != v[i] + v[N - 1 - i])
            ok = false;
    if (ok)
        s.insert(l);
    l = v[0];
    int cnt{};
    while (cnt < N && v[cnt] == l)
        cnt++;
    ok = (N - cnt) % 2 == 0;
    for (int i = 0; ok && i < (N - cnt) / 2; i++)
        if (l != v[cnt + i] + v[N - 1 - i])
            ok = false;
    if (ok)
        s.insert(l);
    for (const int &p : s)
        std::cout << p << " ";
}