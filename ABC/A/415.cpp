#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    std::vector<int> v(N);
    for(int& i : v) std::cin >> i;
    int X; std::cin >> X;
    std::cout <<  (std::count(v.begin(), v.end(), X) ? "Yes\n" : "No\n"); 
    return 0;
}