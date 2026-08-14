#include<iostream>
#include<map>
#include<string>
#include<queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T; std::cin>>T;
    while(T!=0){
        --T;
        std::string S;
        std::cin>>S;
        std::map<char,int,std::greater<int>> m;
        bool tf{};
        for(int i=0;i<(int)S.size();++i){
            m[S[i]]++;
            if(m[S[i]]==((int)S.size()+1)/2+1){
                std::cout<<"No\n";
                tf=true;
                break;
            }
        }
        if(!tf){
            std::cout<<"Yes\n";
            std::priority_queue<std::pair<int,char>> pq;
            for(auto [p,q]:m) pq.push({q,p});
            std::string ans{};
            while(pq.size()>=2){
                auto [a,b]=pq.top();pq.pop();
                auto [c,d]=pq.top();pq.pop();
                ans+=b;ans+=d;
                if(--a!=0) pq.push({a,b});
                if(--c!=0) pq.push({c,d});
            }
            if(!pq.empty())ans+=pq.top().second;
            std::cout<<ans<<'\n';
        }
    }
    return 0;
}