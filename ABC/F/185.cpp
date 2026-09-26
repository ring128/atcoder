#include<iostream>
#include<vector>

std::vector<int> create_segmenttree(const std::vector<int>& S){
  int n = S.size();
  int size = 1;
  while (size < n) size *= 2;
  std::vector<int> st(2 * size, 0);
  for (int i = 0; i < n; ++i) {
      st[size + i] = S[i];
  }
  for (int i = size - 1; i >= 1; --i){
      st[i] = st[i * 2] ^ st[i * 2 + 1];
  }
  return st;
}

void segset (std::vector<int>& st, int T, int X, int Y){
    int size = st.size() / 2;
    if(T & 1){
        int p = size + X - 1; 
        st[p] ^= Y;
        while(p > 1){
            p >>= 1;
            st[p] = st[p * 2] ^ st[p * 2 + 1];
        }
    } else {
        int l = size + X - 1, r = size + Y, ans{};

        while (l < r) {
            if (l & 1) ans ^= st[l++];
            if (r & 1) ans ^= st[--r];
            l >>= 1;
            r >>= 1;
        }

        std::cout << ans << '\n';
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N,Q;
    std::cin>>N>>Q;
    std::vector<int> v(N);
    for(int& i : v) std::cin>>i;
    std::vector<int> st = create_segmenttree(v);
    
    while(Q--){
        int T,X,Y;
        std::cin>>T>>X>>Y;
        segset(st,T,X,Y);
    }
    
    return 0;
}