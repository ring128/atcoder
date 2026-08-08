#include<iostream>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
    int N; std::cin >> N;
    int n{},cnt{};
    for(int i = 1; i <= N; ++i){
        for(int j = i+1; j <= N; ++j){
            if(j==i+1&&j<=n){
                j = n + 1;
                cnt += n - i;
                if(j > N) break;
            }
            std::cout<<"? "<<i<<" "<<j<<std::endl;
            std::string S; std::cin >> S;
            if(S == "Yes"){
                n = j;
                cnt++;
            }    
            else break;
        }
    }
    std::cout << "! " << cnt << std::endl;
    return 0;
}