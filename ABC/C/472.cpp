#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,M,l{};
    long long K,lc{};
    cin>>N>>M>>K;
    vector<int>A(N);
    for(int& i : A)cin>>i;
    vector<bool> e(N);
    for(int i=0;i<N;++i){
        while(i-l+1>M){
            if(e[l])lc-=A[l];
            l++;
        }
        if(lc+A[i]<=K){
            lc+=A[i];
            e[i]=true;
            cout<<"Yes\n";
        } else cout<<"No\n";
    }
    return 0;
}