#include<iostream>
#include<map>
#include<set>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,A,cnt{};std::cin>>N;
    std::map<int,int> m,ans;
    std::set<int,std::greater<int>> s;
    std::vector<int> v;
    while(std::cin>>A){
        m[A]++;
        s.insert(A);
        v.push_back(A);
    }
    for(auto it=s.begin();it!=s.end();++it){
        ans[*it]=std::distance(s.begin(),it)+1+cnt;
        cnt+=--m[*it];
    }
    for(int i : v)std::cout<<ans[i]<<'\n';
    return 0;
}