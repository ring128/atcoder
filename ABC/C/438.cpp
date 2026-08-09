#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N; std::cin>>N;
    std::vector<std::pair<int,int>> v;
    for(int i=0;i<N;i++){
        int A; std::cin>>A;
        if(!v.empty()&&v.back().first==A){
            ++v.back().second;

            if(v.back().second==4) v.pop_back();
        }
        else{
            v.push_back({A,1});
        }
    }
    int ans{};
    for(auto [p,q]:v) ans+=q;
    std::cout<<ans<<'\n';
}