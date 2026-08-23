#include<iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int R,X;std::cin>>R>>X;
    bool tf;
    if(X&1){
        if(R>=1600&&R<3000) tf = true;
        else tf=false;
    } else {
        if(R>=1200&&R<2400) tf=true;
        else tf=false;
    }
    std::cout << (tf ? "Yes\n" : "No\n");    
    return 0;
}