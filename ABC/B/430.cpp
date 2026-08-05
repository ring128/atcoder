#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    
    int N, M; std::cin >> N >> M;
    std::vector<std::vector<char>> S(N, std::vector<char>(N));
    for(auto& c : S) for(char& cc : c) std::cin >> cc;
    
    std::set<std::vector<std::vector<char>>> s;

    for(int i = 0; i <= N - M; ++i){
        std::vector<std::vector<char>> vc(M, std::vector<char>(M, {}));
        for(int j = 0; j <= N - M; ++j){
            for(int k = 0; k < M; ++k){
                for(int l = 0; l < M; ++l) vc[k][l] = S[i + k][j + l];
            }
            s.insert(vc);
        }
    }
    std::cout << s.size() << '\n';
    return 0;
}