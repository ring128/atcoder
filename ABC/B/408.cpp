#include<iostream>
#include<algorithm>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N; std::cin >> N;
    std::set<int> s;
    int A;

    while(std::cin >> A) s.insert(A);

    std::cout << s.size() << '\n';
    for(const int& i : s) std::cout << i << " ";
    return 0;
}