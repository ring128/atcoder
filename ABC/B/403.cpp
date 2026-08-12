#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string T, U;
    std::cin >> T >> U;
    int A = T.size(), B = U.size();
    for(int i = 0; i <= A - B; ++i){
        bool tf = true;
        if(T[i] == '?' || T[i] == U[0]){
            for(int j = 1; j < B; ++j){
                if(T[i+j]!='?' && T[i+j] != U[j]){
                    tf = !tf;
                    break;
                }    
            }
            if(tf){
                std::cout << "Yes\n";
                return 0;
            }
        }
    }
    std::cout << "No\n";
    return 0;
}