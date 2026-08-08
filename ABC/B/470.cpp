#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N; std::cin >> N;
    std::vector<int> v(N, 0);
    for (int i = 0; i < N; ++i) {
        int A;
        std::cin >> A;
        v[--A]++;
    }

    std::sort(v.rbegin(), v.rend());
    std::cout << N - v[0] << '\n';

    return 0;
}