#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, ans{}; std::cin >> N;
    std::map<int, int> m;
    for(int i = 0; i < N; ++i){
        int A; std::cin >> A;
        if(m[A-1] == 0) m[A] = 1;
        else m[A] = std::max(m[A-1] + 1,m[A]);
        ans = std::max(ans, m[A]);
    }
    std::cout << ans << '\n';
    return 0;
}