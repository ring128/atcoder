#include<iostream>
#include<queue>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,M,K;std::cin>>N>>M>>K;
    std::priority_queue<int,std::vector<int>,std::greater<int>> n,m;
    while(N!=0){
        int H; std::cin>>H;
        n.push(H);
        --N;
    }
    while(M!=0){
        int B;std::cin>>B;
        m.push(B);
        --M;
    }
    while(!n.empty()&&!m.empty()&&n.size()>=K&&m.size()>=K&&K!=0){
        if(n.top()<=m.top()){
            n.pop();
            m.pop();
            --K;
        } else {
            m.pop();
        }
    }

    std::cout << (K==0 ? "Yes\n" : "No\n");
   
    return 0;
}