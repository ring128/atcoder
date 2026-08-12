#include<iostream>
#include<vector>
#include<algorithm>

int power(int a, int b){
    if(b == 0) return 1;

    int x = power(a, b / 2);
    x *= x;
    if(b % 2) x *= a;
    return x;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,K; std::cin>>N>>K;
    std::vector<std::pair<int,int>> v(N);
    for(auto& [p,q] : v) std::cin>>p>>q;
    
    std::sort(v.begin(), v.end(), [](auto a, auto b){
        return a.second < b.second;
    });

    int log = 1, d = power(2,30), ans{};
    
    while(d > 0){
        int nl = v[0].second, k=1;
        for(int i = 1; i < N; ++i){
            if(v[i].first >= nl + log){
                nl = v[i].second;
                k++;
                if(k==K)break;
            }
        }
        if(k==K){
            ans = log;
            d >>= 1;
            log += d;
        } else {
            if(log == 1){
                ans = -1;
                break;
            } else {
                d >>= 1;
                log -= d;
            }
        }
    }
    std::cout << ans << '\n';
}