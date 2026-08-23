#include<iostream>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;long long K;std::cin>>N>>K;
    std::multiset<std::pair<long long,int>> s;
    for(int i=1;i<=N;++i){
        long long A;std::cin>>A;
        s.insert({A,i});
    }
    long long nbtn=1LL<<61,sbn=1LL<<60,ok,ng;
    while(true){
        long long k=K;
        for(auto it=s.begin();it!=s.end();++it){
            auto[a,b]=*it;
            if(nbtn<a||k<0)break;
            k-=((nbtn-a)%b==0 ? (nbtn-a)/b:(nbtn-a)/b+1);
        }
        if(k<0){
            ng=nbtn;
            nbtn-=sbn;
            sbn>>=1;
        } else if(k>=0){
            ok=nbtn;
            nbtn+=sbn;
            sbn>>=1;
        }
        if(ng-ok==1){
            std::cout<<ok<<'\n';
            return 0;
        }    
    }
}