#include<iostream>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::set<char> ms;

    char c;
    while(std::cin>>c){
        ms.insert(c);
    }

    int cnt{};
    for(auto it = ms.begin();it!=ms.end();++it){
        if(*it!=97+cnt){
            std::cout<<static_cast<char>(97+cnt)<<'\n';
            return 0;
        }
        cnt++;
    }
    std::cout<<static_cast<char>(97+cnt)<<'\n';
    return 0;
}