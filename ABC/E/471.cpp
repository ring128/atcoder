#include <bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr ll mod=998244353;

ll power(ll a,ll b){
    if(b==0)return 1;

    ll x=power(a,b/2);
    x=x*x%mod;
    if(b%2)x=x*a%mod;
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    ll beko{},bekw{},a=K,b=N;
    ll ans{};
    vector<ll>A(N);
    for(ll& i:A)cin>>i;
    for(int i=0;i<N;++i){
        bekw+=A[i]*A[i]%mod;
        bekw%=mod;
    }
    ll sum{};
    for(int i=0;i<N;++i){
        beko+=sum*A[i]%mod;
        beko%=mod;
        sum+=A[i];
        sum%=mod;
    }
    int n=N,k=K;
    while(K!=0){
        a=a*N%mod;
        b=b*K%mod;
        K--;
        N--;
    }
    ll bekwcnt=a*power(b,mod-2)%mod;
    N=n-1;K=k-1;
    a=K;b=N;
    while(K!=0){
        a=a*N%mod;
        b=b*K%mod;
        K--;
        N--;
    }

    ll bekocnt{};
    if(k>=2)bekocnt=a*power(b,mod-2)%mod;
    ans=bekw*bekwcnt%mod;
    ans=(ans+2*beko%mod*bekocnt)%mod;
    cout<<ans<<'\n';
    return 0;
}