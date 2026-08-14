#include<iostream>
#include<queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int Q; std::cin>>Q;
    std::queue<int> q;
    for(int i = 0; i < Q; ++i){
        int A; std::cin>>A;
        if(A & 1){
            int B; std::cin>>B;
            q.push(B);
        } else {
            int pr = q.front();
            q.pop();
            std::cout<<pr<<'\n';
        }
    }
    return 0;
}