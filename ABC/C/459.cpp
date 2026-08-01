#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<iterator>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); //インタラクティブで消す
    int N,Q; std::cin>>N>>Q;
    std::vector<int> a(N,0),b(Q+1,0);
    int cnt=1;

    for(int i=0;i<Q;i++){
        int A,B;std::cin>>A>>B;
        if(A==1){
            a[B-1]++;
            b[a[B-1]]++;
            if(b[cnt] == N)cnt++;
        }
        else{
            std::cout<<((Q<B+cnt-1)?0:b[B+cnt-1])<<" ";
        }
    }
    return 0;
}