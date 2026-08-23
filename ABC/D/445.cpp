#include<iostream>
#include<queue>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H,W,N,h,w,nh=1,nw=1;std::cin>>H>>W>>N;
    std::priority_queue<std::tuple<int,int,int>> pqh{},pqw{};
    std::vector<bool> used(N,false);
    std::vector<std::pair<int,int>> ans(N);
    for(int i=0;i<N;++i){
        std::cin>>h>>w;
        pqh.push({h,w,i});
        pqw.push({w,h,i});
    }
    while(!(H==0||W==0)){
        while(used[get<2>(pqh.top())]||used[get<2>(pqw.top())]){
            if(used[get<2>(pqh.top())]) pqh.pop();
            if(used[get<2>(pqw.top())]) pqw.pop();
        }
        auto[ha,hb,hc]=pqh.top();
        auto[wa,wb,wc]=pqw.top();
        if(ha==H){
            ans[hc]={nh,nw};            
            used[hc]=true;
            W-=hb;
            nw+=hb;
            pqh.pop();
        } else if(wa==W){
            ans[wc]={nh,nw};
            used[wc]=true;
            H-=wb;
            nh+=wb;
            pqw.pop();
        }
    }
    for(auto[a,b]:ans) std::cout<<a<<' '<<b<<'\n';
    return 0;
}