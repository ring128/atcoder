#include<iostream>
#include<algorithm>
#include<set>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    long long N,K,X; std::cin >> N >> K >> X;
    std::multiset<long long,std::greater<long long>> s;
    int cnt{};

    long long A;
    while(std::cin >> A) s.insert(A);
    
    long long sum{};
    for(long long l : s){
        if(N - K > 0) K++;
        else sum += l;    
        cnt++;
        if(sum >= X){
            std::cout << cnt << '\n';
            return 0;
        }    
    }

    std::cout << "-1" << '\n';
    return 0;
}    