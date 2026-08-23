#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,i{};
    long long ansa{},ansb{},cnta{},cntb{};
    char c;
    std::cin>>N;
    while(std::cin>>c){
        if(c=='A'){
            ansa+=abs(cnta*2-i);
            ansb+=abs(cntb*2+1-i);
            cnta++;cntb++;
        }
        ++i;
    }
    std::cout<<std::min(ansa,ansb)<<'\n';
    return 0;
}