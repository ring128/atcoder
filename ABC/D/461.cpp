#include<iostream>
#include<vector>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H,W,K;std::cin>>H>>W>>K;
    long long ans{};
    std::vector<std::string> S(H);
    for(std::string& s:S) std::cin>>s;
    for(int i = 0; i < W; ++i){
        std::vector<int> r(H);
        for(int j = i; j < W; ++j){
            for(int l=0;l<H;++l)if(S[l][j]=='1')r[l]++;
            if(K==0){
                int z{};
                for(int k=0;k<H;++k){
                    if(r[k]==0)ans += ++z;
                    else z = 0;
                }
            } else {
                int n{},l{},z{};
                for(int k=0;k<H;++k){
                    n += r[k];
                    if(n > K) z = 0;
                    while(n > K) n -=r[l++];
                    if(n==K){
                        while(l<=k&&r[l]==0){
                            ++l;
                            ++z;
                        }
                        ans += z + 1;
                    }
                }
            }
        }
    }
    std::cout << ans << '\n';
    return 0;
}