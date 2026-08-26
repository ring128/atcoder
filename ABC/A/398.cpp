#include<iostream>

void hh(int N){
    for(int i=0;i<N/2;++i){
            std::cout<<'-';
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;std::cin>>N;
    if(N&1){
        hh(N);
        std::cout<<'=';
        hh(N);
    } else {
        hh(N-1);
        std::cout<<"==";
        hh(N-1);
    }
    return 0;
}