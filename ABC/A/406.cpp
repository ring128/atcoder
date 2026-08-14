#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int A,B,C,D; std::cin>>A>>B>>C>>D;
    std::pair<int,int> a({A,B}),b({C,D});
    bool tf = a>b;
    std::cout << (tf ? "Yes\n" : "No\n");
    return 0;
}