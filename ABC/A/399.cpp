#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,ans{};std::string S,T;
    std::cin>>N>>S>>T;
    for(int i=0;i<N;++i) if(S[i]!=T[i]) ans++;
    std::cout<<ans<<'\n';;
    return 0;
}