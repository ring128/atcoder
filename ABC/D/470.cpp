#include <iostream>
#include <unordered_map>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q; std::cin >> N >> Q;
    std::unordered_map<int,int> f(N);
    std::unordered_map<int,int> s(N);
    bool tf{};
    for(int i = 0; i < N; ++i){
        int A; std::cin >> A;
        f[A] = i;
        s[i] = A;
    }

    for(int i = 0; i < Q; ++i){
        int A; std::cin >> A;
        if(A == 1){
            int x,y;
            std::cin >> x >> y;
            if(!tf){
                int a = s[x-1];
                int b = s[y-1];
                s[x-1] = b;
                s[y-1] = a;
                f[b] = x-1;
                f[a] = y-1;
            }
            else{
                int a = f[x];
                int b = f[y];
                f[x] = b;
                f[y] = a;
                s[b] = x;
                s[a] = y;
            }
        } else tf = !tf;
    }

    if(!tf) for(int i = 0; i < N; ++i) std::cout << s[i] << ' ';
    else for(int i = 1; i <= N; ++i) std::cout << f[i] + 1 << ' ';
    std::cout << '\n';
}