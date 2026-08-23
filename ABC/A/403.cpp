#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,A,B,ans{};std::cin>>N>>A;
    ans+=A;
    while(std::cin>>A>>B){
        ans+=B;
    }
    std::cout<<ans<<'\n';
    return 0;
}