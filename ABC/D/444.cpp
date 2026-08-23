#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,A,sum{};std::cin>>N;
    std::vector<int> s(2e5,0), ans(2e5,0);
    while(std::cin>>A) s[2e5-A]++;
    for(int i=0;i<2e5;++i){
        sum+=s[i];
        ans[i]+=sum;
    }
    for(int i=199999;i>0;--i){
        A=ans[i]/10;
        ans[i]%=10;
        ans[i-1]+=A;
    }
    bool tf{};
    for(int i : ans){
        if(i!=0) tf=true;
        if(!(!tf&&i==0))std::cout<<i;
    }    
    return 0;
}