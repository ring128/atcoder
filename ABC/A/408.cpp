#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, S, A, T{}; std::cin >> N >> S;
    while(std::cin >> A){
        if(A - T > S){
            std::cout << "No\n";
            return 0;
        } else T = A;
    }
    std::cout << "Yes\n";
    return 0;
}