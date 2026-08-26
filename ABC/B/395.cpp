#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,cnt{};std::cin>>N;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(!(cnt>j||N-cnt-1<j)){
                int A=((N-1)/2>=i ? i : N-i-1);
                if(A&1) std::cout<<'.';
                else std::cout<<'#';
            } else {
                int B=((N-1)/2>=j ? j : N-j-1);
                if(B&1) std::cout<<'.';
                else std::cout<<'#';
            }
        }
        std::cout<<'\n';
        if((N-1)/2>i) cnt++;
        else if((N-1)/2<i)cnt--;
    }
    return 0;
}