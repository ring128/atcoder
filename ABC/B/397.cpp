#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string S;std::cin>>S;
    int cnt{};
    if(S[0]=='o')cnt++;
    if(S[S.size()-1]=='i')cnt++;
    for(int i=1;i<S.size();++i){
        if(S[i-1]==S[i])cnt++;
    }
    std::cout<<cnt<<'\n';
    return 0;
}