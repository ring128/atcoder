#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q,A;std::cin>>N>>Q>>A;
    long long cnt{};
    std::vector<long long> sum(2*N+1);
    sum[0];sum[1]=A,sum[N+1]=A;
    for(int i=2;i<=N;++i){
        int Ai;std::cin>>Ai;
        sum[i]=sum[i-1]+Ai;
        sum[N+i]=Ai;
    }
    for(int i=N+1;i<=2*N;++i)sum[i]+=sum[i-1];
    for(int i=0;i<Q;++i){
        int q;std::cin>>q;
        if(q&1){
            int c;std::cin>>c;
            cnt+=c; cnt%=N;
        } else {
            int l,r;std::cin>>l>>r;
            std::cout<<sum[r+cnt]-sum[--l+cnt]<<'\n';
        }
    }    
    return 0;
}