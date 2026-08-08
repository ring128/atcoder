#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, K; std::cin >> N >> K;
    long long limit = 1;
    for(int i = 0; i < K; ++i){
        limit *= 10;
    }
    --limit;
    long long ans = 1;
    for(int i = 0; i < N; ++i){
        long long A; std::cin >> A;
        if(ans > limit / A){
            ans = 1;
        } else {
            ans *= A;
        }
    }
    std::cout << ans << '\n';
}