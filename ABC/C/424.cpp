#include<iostream>
#include<vector>
#include<queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;std::cin>>N;
    std::vector<std::vector<int>> a(N);
    std::vector<int> g;
    std::vector<bool> used(N,false);
    std::queue<int> q;
    for(int i=0;i<N;++i){
        int A,B;std::cin>>A>>B;
        if(A==0&&B==0){
            g.push_back(i);
            q.push(i);
            used[i]=true;
        } else {
            a[A-1].push_back(i);
            a[B-1].push_back(i);
        }     
    }
    while(!q.empty()){
        int qf=q.front();
        q.pop();
        for(int i : a[qf]){
            if(!used[i]){
                q.push(i);
                used[i]=true;
                g.push_back(i);
            }
        }
    }
    std::cout<<g.size()<<'\n';
    return 0;
}
