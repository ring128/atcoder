#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q,V,nt{},ans{}; cin>>Q>>V;
    priority_queue<int> pq;
    for(int i=0;i<Q;++i){
        int A;cin>>A;
        if(A&1){
            int B,C;cin>>B>>C;
            pq.push(C-B);
        } else {
            int B;cin>>B;
            if(pq.empty()) cout<<"-1\n";
            else{
                int p=pq.top();
                pq.pop();
                cout<<min(B+p,V)<<'\n';  
            }
        }
    }
    return 0;
}