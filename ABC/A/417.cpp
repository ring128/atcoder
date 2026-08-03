#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N, A, B; std::string S;
    std::cin >> N >> A >> B >> S;
    std::cout << S.substr(A, N-A-B) << '\n';
    return 0;
}