#include<iostream>
#include<algorithm>
#include<iomanip>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int X, Y; std::cin >> X >> Y;
    int xy{};

    for(int i = 1; i <= 6; ++i) for(int j = 1; j <= 6; ++j) if(i+j>=X||std::abs(i-j)>=Y) xy++;

    std::cout<<std::fixed<<std::setprecision(15)<<xy/36.0<<'\n';
    return 0;
}