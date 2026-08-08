#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    int cnt{};

    for(int i = 0; i < N; ++i){
        int A,B; std::cin >> A >> B;
        if(A < B) cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}