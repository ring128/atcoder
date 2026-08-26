#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,maR{},miR=1e9,maC{},miC=1e9,R,C;
    std::cin>>N;
    while(std::cin>>R>>C){
        maR=std::max(maR,R);
        miR=std::min(miR,R);
        maC=std::max(maC,C);
        miC=std::min(miC,C);
    }
    int l = std::max((maR-miR+1)/2,(maC-miC+1)/2);
    std::cout<<l<<'\n';
    return 0;
}