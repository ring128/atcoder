#include<iostream>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T; std::cin >> T;
    for(int i = 0; i < T; ++i){
        int N, ans{}; std::cin >> N;
        std::multiset<int> s;
        long long P{};
        for(int i = 0; i < N; ++i){
            int A, B; std::cin >> A >> B;
            s.insert(A+B);
            P += B;
        }
        for(const int& p : s){
            if(P - p < 0) break;
            P -= p; ans++;
        }            
        std::cout << ans << '\n'; 
    }
    return 0;
}