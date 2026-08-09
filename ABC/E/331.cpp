#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M, L, a  = 1;
    std::cin >> N >> M >> L;
    std::vector<int> A(N), B(M);
    while(a < N) a <<= 1;
    for(int& i : A) std::cin >> i;
    std::vector<int> seg(2 * a);
    for(int i = 0; i < N; ++i) seg[a+i] = A[i];
    for(int i = a - 1; i > 0; --i) seg[i] = std::max(seg[i * 2], seg[i * 2 + 1]);
    for(int& i : B) std::cin >> i;
    std::vector<std::vector<int>> k(M);
    for(int i = 0; i < L; ++i){
        int c, d; std::cin >> c >> d;
        k[--d].push_back(--c);
    }
    int ans{};

    auto set = [&](int p, int q){
        p += a;
        seg[p] = q;
        while(p > 1){
            p >>= 1;
            seg[p] = std::max(seg[p * 2], seg[p * 2 + 1]);
        }
    };

    for(int i = 0; i < M; ++i){
        for(int j = 0; j < (int)k[i].size(); ++j) set(k[i][j], -1);
        ans = std::max(seg[1] + B[i], ans);
        for(int j = 0; j < (int)k[i].size(); ++j) set(k[i][j], A[k[i][j]]);
    }
    std::cout << ans << '\n';
    return 0;
}