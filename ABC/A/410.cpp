#include<iostream>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N, K, cnt{}; std::cin >> N;
    std::vector<int> v(N);
    for(int& i : v) std::cin >> i;
    std::cin >> K;
    for(const int& i : v) if(i >= K) cnt++;
    std::cout << cnt << '\n';
    return 0;
}