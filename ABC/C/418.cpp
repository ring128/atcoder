#include<iostream>
#include<vector>
#include<queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q,A,B,nd{};
    std::cin>>N>>Q;
    int cnt=N;
    std::vector<long long> sum(1e6+1,0);
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq;
    for(int i=0;i<N;++i){
        std::cin>>A;
        pq.push(A);
    }
    sum[1]=1;
    for(int i=2;i<=1e6;++i){
        nd=i-1;
        int r{};
        while(!pq.empty()&&pq.top()==nd){
            pq.pop();
            r++;
        } 
        sum[i]+=sum[i-1]+cnt;
        cnt-=r;
        if(pq.empty()) sum[i]=-1;
    }
    for(int i=0;i<Q;++i){
        std::cin>>B;
        std::cout<<sum[B]<<'\n';
    }
    return 0;
}