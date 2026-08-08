#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N, Q; std::cin >> N >> Q;
    int log = 0;
    while((1 << (log+1)) <= Q) ++log;
    std::vector<std::vector<int>> p(log+1);
    for(int i = 0; i <= log; ++i) p[i].resize(1<<i);
    std::vector<int> H(N, 0),cnt(Q+2,0);
    int d{}, ans{};
    auto t = [&](int h){
        for(int i = 0; i <= log; ++i){
            int m = (1 << i) - 1;
            int r = h & m;
            p[i][r] ^= 1;
        }
    };
    for(int i = 0; i < Q; i++){
        int A; std::cin >> A;
        if(A == 1){
            int x; std::cin >> x;
            int a = std::max(0, H[--x] - d);
            ans ^= a;
            ans ^= a + 1;
            if(a == 0){
                H[x] = d+1;
                cnt[H[x]]++;
                t(H[x]);
            } else {
                cnt[H[x]]--;
                t(H[x]);

                H[x]++;

                cnt[H[x]]++;
                t(H[x]);
            }
        } else {
                for(int k = 0; k <= log; ++k){
                int m = (1 << k) - 1;
                int r = d & m;
                if(p[k][r]){
                    ans ^= (1 << k);
                }
            }
            ++d;
            if(cnt[d] & 1){
                t(d);
            }
            cnt[d] = 0;
        }
        std::cout << ans << '\n';
    }    
}