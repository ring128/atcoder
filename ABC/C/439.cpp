#include<iostream>
#include<cmath>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    std::vector<int> v(N + 1);
    for(int i = 1; i <= std::sqrt(N); ++i){
        for(int j = i+1; j <= std::sqrt(N); ++j){
            int A = i * i + j * j;
            if(A <= N) v[A]++;
        }
    }
    int ans = 0;
    for(int i = 1; i <= N; ++i) if(v[i] == 1) ans++;
    std::cout << ans << '\n';
    for(int i = 1; i <= N; ++i) if(v[i] == 1) std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}