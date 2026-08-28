#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    float X;std::cin>>X;
    if(38.0<=X){
        std::cout<<'1'<<'\n';
        return 0;
    } else {
        std::cout<<(37.5>X ? '3' : '2')<<'\n';
        return 0; 
    }
    return 0;
}