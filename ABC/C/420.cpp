#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q;std::cin>>N>>Q;
    std::vector<int> A(N),B(N);
    for(int& i : A) std::cin>>i;
    for(int& i : B) std::cin>>i;
    long long ans{};
    for(int i=0;i<N;++i){
        ans+=(A[i]>B[i] ? B[i]:A[i]);
    }
    for(int i=0;i<Q;++i){
        char C;int X,V;
        std::cin>>C>>X>>V;
        --X;
        int im=std::min(A[X],B[X]);
        if((int)C&1) A[X]=V;
        else B[X]=V;
        ans+=std::min(A[X],B[X])-im;
        std::cout<<ans<<'\n';
    }
    return 0;
}