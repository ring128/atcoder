#include<iostream>
#include<algorithm>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    for(int i = 1; i <= N; ++i) std::cout << ((i % 3 == 0) ? "Fizz" : std::to_string(i)) << '\n';
    return 0;
}