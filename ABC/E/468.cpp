#include<iostream>
#include<vector>
constexpr long long mod = 998244353;

long long gp(long long a,long long b){
    long long r=1;
    while(b>0){
        if(b%2)r=r*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return r;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N; std::cin>>N;
    std::vector<long long> h(N+1);
    h[0]=0;
    for(long long i=1;i<=N;++i) h[i]=(h[i-1]+gp(i,mod-2))%mod;
    long long ans{},c=h[N];
    for(int i=1;i<=N;++i){
        long long A; std::cin>>A;
        ans=(ans+A*c)%mod;
        if(i<N) c=(c-h[i]+h[N-i]+mod)%mod;
    }
    std::cout<<ans<<'\n';
    return 0;
}