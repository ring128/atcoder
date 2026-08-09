#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N,M; std::cin >> N >> M;
    std::vector<int> v(M,1e5);
    for(int i = 0; i < N; ++i){
        int A; std::cin >> A;
        if(v[A-1] == 1e5) v[A-1] = i;
    }
    std::sort(v.rbegin(), v.rend());
    int ans{};
    for(auto it = v.begin(); it != v.end(); ++it){
        if(*it == 1e5){
            std::cout << '0' << '\n';
            return 0;
        }
        else{
            ans = N - *it;
            break;
        }
    }
    std::cout << ans << '\n';
    return 0;
}