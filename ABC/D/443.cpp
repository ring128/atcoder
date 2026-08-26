#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;std::cin>>T;
    T++;
    while(--T){
        int N;std::cin>>N;
        std::vector<int> R(N);
        for(int& i: R)std::cin>>i;
        long long ans{};
        for(int i=1;i<N;++i){
            if(R[i-1]>R[i]){
                ans+=R[i-1]-R[i]-1;
                R[i-1]=R[i]+1;
            } else if(R[i-1]<R[i]){
                ans+=R[i]-R[i-1]-1;
                R[i]=R[i-1]+1;
            }
        }
        for(int i=N-1;i!=0;--i){
            if(R[i-1]>R[i]){
                ans+=R[i-1]-R[i]-1;
                R[i-1]=R[i]+1;
            } else if(R[i-1]<R[i]){
                ans+=R[i]-R[i-1]-1;
                R[i]=R[i-1]+1;
            }
        }
        std::cout<<ans<<'\n';
    }
    return 0;
}