#include<iostream>
#include<vector>
#include<algorithm>
#include<array>

std::vector<std::array<int,4>> create_segmenttree(const std::vector<int>& S){
  int n = S.size();
  int size = 1;
  while (size < n) size *= 2;
  std::vector<std::array<int,4>> st(2 * size, {0, 0, 0, 0});
  for (int i = 0; i < n; ++i) {
      st[size + i] = {S[i], 1, 0, 0};
  }
  for (int i = size - 1; i >= 1; --i){
      auto [a,aam,b,bam] = st[i * 2];
      auto [c,cam,d,dam] = st[i * 2 + 1];
      std::vector<std::pair<int,int>> vpg;
      vpg.push_back({a,aam});
      vpg.push_back({b,bam});
      vpg.push_back({c,cam});
      vpg.push_back({d,dam});  
      std::sort(vpg.rbegin(),vpg.rend());
      for(auto it = vpg.begin(); std::next(it) != vpg.end();){
        if(it->first == std::next(it)->first){
            std::next(it)->second +=it->second;
            it = vpg.erase(it);
        } else it++;
      }
      st[i] = {vpg[0].first, vpg[0].second, vpg[1].first, vpg[1].second};
  }
  return st;
}

void segset(std::vector<std::array<int,4>>& seg, int T, int X, int Y){
    int size = seg.size() / 2;
    if(T & 1){
        int p = size + X - 1; 
        seg[p] = {Y,1,0,0};
        while(p > 1){
            p >>= 1;
            auto [a,aam,b,bam] = seg[p * 2];
            auto [c,cam,d,dam] = seg[p * 2 + 1];
            std::vector<std::pair<int,int>> vpg;
            vpg.push_back({a,aam});
            vpg.push_back({b,bam});
            vpg.push_back({c,cam});
            vpg.push_back({d,dam});  
            std::sort(vpg.rbegin(),vpg.rend());

            for(auto it = vpg.begin(); it != vpg.end() && std::next(it) != vpg.end();) {
                if (it->first == std::next(it)->first) {
                    std::next(it)->second += it->second;
                    it = vpg.erase(it);
                } else {
                    ++it;
                }
            }
            seg[p] = {vpg[0].first, vpg[0].second, vpg[1].first, vpg[1].second}; 
        }
    } else {
        int l = size + X - 1, r = size + Y;
        std::vector<std::pair<int,int>> vpg;

        while (l < r) {
            if (l & 1){
                auto [a,b,c,d] = seg[l++];
                vpg.push_back({a,b});
                vpg.push_back({c,d});
            }    
            if (r & 1){
                auto [a,b,c,d] = seg[--r];
                vpg.push_back({a,b});
                vpg.push_back({c,d});
            }    
            l >>= 1;
            r >>= 1;
        }
        std::sort(vpg.rbegin(),vpg.rend());

        for(auto it = vpg.begin(); it != vpg.end() && std::next(it) != vpg.end();) {
            if (it->first == std::next(it)->first) {
                std::next(it)->second += it->second;
                it = vpg.erase(it);
            } else {
                ++it;
            }
        }
        std::cout << vpg[1].second << '\n';
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q; std::cin>>N>>Q;
    std::vector<int> A(N);
    for(int& i : A) std::cin>>i;
    std::vector<std::array<int,4>> seg = create_segmenttree(A);

    while(Q--){
        int q,a,b;
        std::cin>>q>>a>>b;
        segset(seg,q,a,b);
    }
    
    return 0;
}