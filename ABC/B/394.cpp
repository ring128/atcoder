#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;std::cin>>N;
    std::vector<std::string> vs(N);
    for(int i=0;i<N;++i){
        std::string s;
        std::cin>>s;
        vs[i]=s;
    }
    std::sort(vs.begin(),vs.end(),[](auto a,auto b){
        return a.size()<b.size();
    });
    for(const auto& p : vs){
        for(const char& c : p){
            std::cout<<c;
        }
    }
    return 0;
}