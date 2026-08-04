#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (int& x : A) std::cin >> x;

    std::sort(A.rbegin(), A.rend());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int k = i + 1;
        if (A[i] >= k) {
            ans = k;
        }
    }

    std::cout << ans << '\n';
}