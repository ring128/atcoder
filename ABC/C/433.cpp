#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<std::pair<char, int>> S{};
    char c;
    while(std::cin >> c){
        if(S.empty()) S.push_back({c, 1});
        else{
            auto& [p, q] = S.back();
            if(c == p) q++;
            else S.push_back({c, 1});
        } 
    }    
    int cnt{};
    for(int i = 1; i < S.size(); ++i){
        if((int)S[i-1].first + 1 == (int)S[i].first){
            cnt += std::min(S[i-1].second, S[i].second);
        }
    }
    std::cout << cnt << '\n';
    return 0;
}