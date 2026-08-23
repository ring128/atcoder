#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int Q,ns{},ss{};std::cin>>Q;
    std::vector<int> r,m;
    bool ua{};
    for(int i=0;i<Q;++i){
        int A;std::cin>>A;
        if(ua){
            std::cout<<"No\n";
            continue;
        }    
        if(A&1){
            ss++;
            char B;std::cin>>B;
            if(B=='('){
                ns++;
                m.push_back(1);
            } else {
                ns--;
                m.push_back(-1);
            }    
            if(ns<0) r.push_back(ss);
        } else {
            if(!r.empty())if(ss==r.back())r.pop_back();
            ss--;
            ns-=m.back();
            m.pop_back();
        }
        if(Q-i<r.size()) ua=true;
        if(ns==0&&r.empty()) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
    return 0;
}