#include<iostream>
#include<algorithm>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::string S; std::cin >> N >> S;
    if(N < 3){
        std::cout << "No\n";
        return 0;
    }
    std::cout << (S.substr(N-3,3) == "tea" ? "Yes\n" : "No\n"); 
}