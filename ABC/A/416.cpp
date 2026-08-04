#include<iostream>
#include<algorithm>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N, L, R; std::string S;
    std::cin >> N >> L >> R >> S;
    bool tf = true;
    for(int i = L - 1; i < R; i++) if(S[i] == 'x') tf = false; 
    std::cout << (tf ? "Yes\n" : "No\n");
    return 0;
}