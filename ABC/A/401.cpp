#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int S; std::cin>>S;
    std::cout<<(S>=200&&299>=S ? "Success\n" : "Failure\n");
    return 0;
}