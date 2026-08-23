#include<iostream>
#include<map>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::map<int,int> m;
    int N,A;std::cin>>N;
    while(std::cin>>A) m[A]++;
    long long ans{};
    for(auto it=m.begin();it!=m.end();++it){
        if(it->second>1)ans+=1LL*it->second*(it->second-1)*(N-it->second)/2;
    }
    std::cout<<ans<<'\n';
    return 0;
}