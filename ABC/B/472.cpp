#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,d{},sum{},ans=1e6;cin>>N;
    vector<int>L(N);
    for(int& i : L){
        cin>>i;
        sum+=i;
    }
    for(int i=0;i<N-1;++i){
        d+=L[i];
        ans=min(abs(sum-d*2),ans);
    }
    cout<<ans<<'\n';
    return 0;
}