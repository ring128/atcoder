#include<iostream>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q;std::cin>>N>>Q;
    std::multiset<std::pair<int,int>> ms;
    for(int i=1;i<=N;++i)ms.insert({i,1});
    for(int i=0;i<Q;++i){
        int X,Y,cnt{};std::cin>>X>>Y;
        auto it = ms.begin();
        while(it!=ms.end()&&it->first<=X){
            cnt+=it->second;
            ms.erase(ms.begin());
            it=ms.begin();
        }
        if(cnt!=0)ms.insert({Y,cnt});
        std::cout<<cnt<<'\n';
    }
    return 0;
}