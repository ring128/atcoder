#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T; std::cin >> T;
    for(int i = 0; i < T; ++i){
        int N,W; std::cin >> N >> W;
        std::vector<long long> v(N);
        for(long long& p : v) std::cin >> p;
        int M = 2 * W;
        std::vector<long long> sum(M, 0);
        for(int j = 0; j < N; ++j){
            int m = (j+1) % M;
            int w = m + W;
            if(w <= M){
                sum[m] += v[j];
                sum[w] -= v[j];
            }
            else{
                sum[m] += v[j];
                sum[0] += v[j];
                sum[w-M] -= v[j];
            }
        }
        long long now{}, ans = 9e18;
        for(int j = 0; j < M; ++j){
            now += sum[j];
            ans = std::min(ans, now);
        }
        std::cout << ans << '\n';
    }
    return 0;
}