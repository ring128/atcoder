#include<iostream>
#include<deque>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int Q;std::cin>>Q;
    std::deque<int> dq;
    for(int i=0;i<100;++i)dq.push_back(0);
    Q++;
    while(--Q){
        int A;std::cin>>A;
        if(A&1){
            int B;std::cin>>B;
            dq.push_back(B);
        } else {
            int C=dq.back();
            dq.pop_back();
            std::cout<<C<<'\n';
        }
    }
    return 0;
}