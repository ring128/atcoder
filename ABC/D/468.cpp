#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string S; std::cin >> S;
    int C = S.size() * 2 - 1, ans{};

    for(int i = 0; i < C; ++i){
        if(i & 1){
            bool tf{};
            for(int j = 0; j < std::min(i/2 + 1, (int)S.size()-i/2 - 1); ++j){
                if(S[i/2 - j] == S[i/2 + 1 + j]) ans++;
                else{
                    if(!tf){
                        tf = true;
                        ans++;
                    } else break;
                }
            }
        } else {
            ans++;
            bool tf{};
            for(int j = 0; j < std::min(i/2, (int)S.size()-i/2 - 1); ++j){
                if(S[i/2-1-j] == S[i/2+1+j]) ans++;
                else{
                    if(!tf){
                        tf = true;
                        ans++;
                    } else break;
                }
            }
        }
    }
    std::cout << ans << '\n';
    return 0;
}