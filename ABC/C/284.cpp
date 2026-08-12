#include<iostream>
#include <vector>
#include <queue>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,M; std::cin >> N >> M;
    std::vector<std::vector<int>> graph(N+1);
    for(int i = 0; i < M; ++i){
        int A, B; std::cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    std::vector<bool> used(N+1, false);
    int cnt{};
    for(int i = 1; i <= N; ++i){
        if(used[i]) continue;
        std::queue<int> q;
        std::vector<bool> usedDFS(N+1, false);
        for(const int& p : graph[i]){
            q.push(p);
            usedDFS[p] = true;
            used[p] = true;
        }    
        while(!q.empty()){
            int Q = q.front();
            q.pop();
            for(const int& p : graph[Q]){
                if(usedDFS[p]) continue;
                usedDFS[p] = true;
                used[p] = true;
                q.push(p);
            }    
        }
        cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}