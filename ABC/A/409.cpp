#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N; std::cin >> N;
    std::string T, A;
    std::cin >> T >> A;
    bool tf{};
    for(int i = 0; i < N; ++i) if(T[i] == 'o' && A[i] == 'o') tf = true;
    std::cout << (tf ? "Yes\n" : "No\n");
    return 0;
}