#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<int> v(13,0);
    int A;
    while(std::cin>>A){
        v[--A]++;
    }
    std::sort(v.rbegin(),v.rend());
    bool tf=(*v.begin()>2&&*std::next(v.begin())>1);
    std::cout << (tf ? "Yes\n" : "No\n");
    return 0;
}