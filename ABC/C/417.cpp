#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,A;std::cin>>N;
    long long ans{};
    std::vector<int> l(6e5+1,0),r(6e5+1,0);
    for(int i=1;i<=N;++i){
        std::cin>>A;
        if(i!=N)l[2e5+A+i]++;
        if(i!=1)r[2e5+i-A]++;
    }
    for(int i=0;i<6e5;++i){
        ans+=1LL*l[i]*r[i];
    }
    std::cout<<ans<<'\n';
    return 0;
}