#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int X,Q;std::cin>>X>>Q;
    std::priority_queue<int> pql;
    std::priority_queue<int,std::vector<int>,std::greater<int>> pqg;
    for(int i=0;i<Q;++i){
        int A,B;std::cin>>A>>B;
        if(A>=X)pqg.push(A);
        else pql.push(A);
        if(B>=X)pqg.push(B);
        else pql.push(B);
        if(pql.size()>pqg.size()){
            int p = pql.top();
            pql.pop();
            if(p>=X) pqg.push(p);
            else{
                pqg.push(X);
                X=p;
            }
        } else if(pql.size()<pqg.size()){
            int p = pqg.top();
            pqg.pop();
            if(p<=X)pql.push(p);
            else{
                pql.push(X);
                X=p;
            }
        }
        std::cout<<X<<'\n';
    }
    return 0;
}