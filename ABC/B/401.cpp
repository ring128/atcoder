#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,cnt{}; std::cin>>N;
    std::string S;
    bool l{};
    while(std::cin>>S){
        if(S=="login")l = true;
        if(S=="logout")l = false;
        if(!l && S == "private") cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}