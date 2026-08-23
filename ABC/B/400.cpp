#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,M; std::cin>>N>>M;
    long long ans=1,n=1;
    for(int i=1;i<=M;++i){
        n*=N;
        ans+=n;
        if(ans>1e9){
            std::cout<<"inf\n";
            return 0;
        }
    }
    std::cout<<ans<<'\n';
    return 0;
}