#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;std::cin>>T;
    long long A,B,C;
    while(std::cin>>A>>B>>C){
        std::cout<<std::min({A,C,(A+B+C)/3})<<'\n';
    }
    return 0;
}