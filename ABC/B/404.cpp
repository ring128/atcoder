#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    std::vector<std::vector<char>> S(N, std::vector<char>(N));
    std::vector<std::vector<char>> T(N, std::vector<char>(N));
    for(auto& cc : S) for(char& c : cc) std::cin >> c;
    for(auto& cc : T) for(char& c : cc) std::cin >> c;
    std::vector<int> ans(4, 0);
    ans[1]++; ans[2] = 2; ans[3] = 3;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            char c = T[i][j];
            if(c != S[i][j]) ans[0]++;
            if(c != S[N-j-1][i]) ans[1]++;
            if(c != S[N-i-1][N-j-1]) ans[2]++;
            if(c != S[j][N-i-1]) ans[3]++;
        }
    }
    std::cout << std::min({ans[0], ans[1], ans[2], ans[3]}) << '\n';
    return 0;
}