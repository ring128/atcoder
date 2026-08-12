#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,D; std::cin>>N>>D;
    std::vector<int> r(2e6,0);
    long long ans{};
    for(int i = 0; i < N; ++i){
        int S,T;std::cin>>S>>T;
        if(T-S>=D){
            r[S]++;
            r[T-D+1]--;
        }
    }    
    int n{};
    for(int& i : r){
        n += i;
        ans += static_cast<long long>(n) * (n - 1) / 2;
    }
    std::cout<<ans<<'\n';
    return 0;
}