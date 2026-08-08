#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int T; std::cin>> T;
    for(int i = 0; i < T; ++i){
        int N; std::string S;
        std::cin >> N >> S;
        std::vector<int> X(N), Y(N-1);
        for(int& v : X) std::cin >> v;
        for(int& v : Y) std::cin >> v;
        std::vector<long long> dps(N, 0), dpr(N, 0);
        if(S[0] == 'R') dps[0] -= X[0];
        else dpr[0] -= X[0];
        for(int j = 1; j < (int)S.size(); ++j){
            if(S[j] == 'R'){
                dps[j]=std::max(dps[j-1]-X[j],dpr[j-1]+Y[j-1]-X[j]);
                dpr[j]=std::max(dps[j-1],dpr[j-1]);
            } else {
                dps[j]=std::max(dpr[j-1]+Y[j-1],dps[j-1]);
                dpr[j]=std::max(dpr[j-1]-X[j],dps[j-1]-X[j]);
            }
        }
        std::cout << (dps[N-1] > dpr[N-1] ? dps[N-1] : dpr[N-1]) << '\n';
    }
    return 0;
}