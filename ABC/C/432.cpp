#include<iostream>
#include<set>
#include<numeric>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,X,Y,A;std::cin>>N>>X>>Y;
    std::multiset<int> s;
    while(std::cin>>A) s.insert(A);
    long long sk = std::lcm(1LL*X, 1LL*Y);
    int m = sk/X - sk/Y, n=*s.begin(),l=*s.begin();
    long long ans = n;
    for(auto it=std::next(s.begin());it!=s.end();++it){
        if((*it-n)%m!=0||1LL**s.begin()*Y<1LL*X**it){
            std::cout<<"-1\n";
            return 0;
        } else {
            int d = 1LL*(*it-n)/m*(sk/Y);
            l -= d;
            ans+=l;
            n = *it;
        }    
    }
    std::cout<<ans<<'\n';
    return 0;
}