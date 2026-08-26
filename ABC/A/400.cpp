#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int A;std::cin>>A;
    if(400%A==0)std::cout<<400/A;
    else std::cout<<"-1\n";
    return 0;
}