#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,M;std::cin>>N>>M;
    std::vector<std::pair<int,int>> v(M);
    for(auto&[p,q]:v)std::cin>>p>>q;
    int ans=M;
    for(int i=0;i<1<<N;++i){
        int cnt{};
        for(const auto&[p,q]:v){
            if(((i>>(p-1)&1)==((i>>(q-1))&1)))cnt++;
        }
        ans=std::min(ans,cnt);
    }
    std::cout<<ans<<'\n';
    return 0;
}