#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    char c;
    while(std::cin>>c){
        if(static_cast<int>(c)<97){
            std::cout<<c;
        }
    }
    return 0;
}