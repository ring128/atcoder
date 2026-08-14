#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int A,B; std::cin>>A>>B;
    int ans=A/B;
    A -= B*ans;
    if(B/2<A) ans++;
    std::cout << ans << '\n';
    return 0;
}