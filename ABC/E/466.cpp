#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,K;std::cin>>N>>K;
    std::vector<int> m(N+1);
    long long ans{};
    for(int i=0;i<N;++i){
        int A,B;std::cin>>A>>B;
        ans+=A;
        m[i+1]=B-A;
    }
    std::vector<std::vector<std::vector<long long>>>dp(N+1,std::vector<std::vector<long long>>(K+1,std::vector<long long>(2,-1e9)));
    dp[0][0][0]=0;
    for(int i=1;i<=N;++i){
        dp[i][0][0]=dp[i-1][0][0];
        for(int j=1;j<=std::min(K,i);++j){
            dp[i][j][1]=std::max(dp[i-1][j-1][0],dp[i-1][j][1])+m[i];
            dp[i][j][0]=std::max(dp[i-1][j][0],dp[i-1][j][1]);
        }
    }
    long long dpm{};
    for(const auto& p : dp[N]) for(const auto& uo : p) dpm = std::max(dpm, uo);
    ans += dpm;
    std::cout<<ans<<'\n';
    return 0;
}