#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,R,cnt{},ans{};std::cin>>N>>R;
    bool tf{};
    for(int i=0;i<N;++i){
        int A;std::cin>>A;
        if(i<R){
            if(A&1){
                if(tf) cnt+=2;
            } else {
                if(!tf){
                    cnt=0;
                    tf=true;
                } else {
                    ans+=cnt;
                    cnt=0;
                }
                ans++;
            }
        } else {
            if(i==R){
                if(!tf) cnt=0;
                else{
                    ans+=cnt;
                    cnt=0;
                }    
            }
            if(A&1)cnt+=2;
            else{
                ans++;
                ans+=cnt;
                cnt=0;
            }
        }
    }
    std::cout<<(R==N ? ans+cnt:ans)<<'\n';
    return 0;
}