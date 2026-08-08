#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int sum{};
    int N, M, A; std::cin >> N >> M;
    
    while(std::cin >> A) sum += A;

    std::cout << (sum <= M ? "Yes\n" : "No\n");
    return 0;
}