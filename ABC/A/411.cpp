#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    std::string P; int L;
    std::cin >> P >> L;
    bool tf = (P.size() >= L);
    std::cout << (tf ? "Yes\n" : "No\n");
    return 0;
}