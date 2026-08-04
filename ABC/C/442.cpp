#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

long long ret(long long si){
    if(si < 3) return 0;
    long long r = si * (si-1) * (si-2) / 6;
    return r;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N, M; std::cin >> N >> M;
    std::vector<std::set<int>> v(N);

    for(int i = 0; i < M; i++){
        int A,B; std::cin >> A >> B;
        v[A-1].insert(B);
        v[B-1].insert(A);
    }

    for(int i = 0; i < N; i++){
        std::cout << ret(N-1LL-static_cast<long long>(v[i].size())) << " ";
    }

    return 0;
}