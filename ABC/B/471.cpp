#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    map<string,int> m;
    for(int i=0;i<N;++i){
        string S; cin>>S;
        for(int j=0;j<S.size();++j){
            if(islower(S[j])) S[j]=toupper(S[j]);
        }
        m[S]++;
    }
    auto it = max_element(m.begin(),m.end(),[](const auto& a,const auto& b){
        return a.second<b.second;
    });
    cout<<it->second<<'\n';
    return 0;
}