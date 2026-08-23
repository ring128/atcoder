#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    char c;
    long long dpa{},dpb{},dpc{};
    while(std::cin>>c){
        if(c=='a') dpa+=dpb+dpc+1;
        if(c=='b') dpb+=dpa+dpc+1;
        if(c=='c') dpc+=dpa+dpb+1;
        dpa%=998244353;
        dpb%=998244353;
        dpc%=998244353;
    }
    std::cout<<(dpa+dpb+dpc)%998244353<<'\n';
    return 0;
}