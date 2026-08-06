#include<iostream>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N,L,R; std::cin >> N >> L >> R;
    int cnt{};

    for(int i = 0; i < N; ++i){
        int X,Y; std::cin >> X >> Y;
        if(L >= X && Y >= R) cnt++;
    }

    std::cout << cnt << '\n';
    return 0;
}