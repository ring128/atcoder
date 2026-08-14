#include<iostream>
#include<vector>
#include<queue>
#include<tuple>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H,W,dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={1,0,-1,1,-1,1,0,-1};
    std::cin>>H>>W;

    std::vector<std::vector<char>> S(H,std::vector<char>(W)),ans(H,std::vector<char>(W,'.')),Sa(H,std::vector<char>(W,'.')); 
    std::queue<std::tuple<int,int,int>> q;
    std::vector<std::vector<bool>> used(H,std::vector<bool>(W,false));

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            std::cin>>S[i][j];
        }
    }

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            if(S[i][j]=='#')continue;

            for(int xy=0;xy<8;++xy){
                int ni=i+dx[xy];
                int nj=j+dy[xy];

                if(ni<0||ni>=H||nj<0||nj>=W)continue;

                if(S[ni][nj]=='#'){
                    Sa[i][j]='#';
                    break;
                }
            }
        }
    }

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            if(Sa[i][j]=='#'){
                q.push({i,j,0});
                used[i][j]=true;
            }
        }
    }

    while(!q.empty()){
        auto [a,b,c]=q.front();
        q.pop();

        for(int xy=0;xy<8;++xy){
            int na=a+dx[xy];
            int nb=b+dy[xy];

            if(na<0||na>=H||nb<0||nb>=W)continue;
            if(used[na][nb])continue;

            used[na][nb]=true;
            q.push({na,nb,c+1});

            if((c+1)&1)ans[na][nb]='#';
            else ans[na][nb]='.';
        }
    }

    for(auto p:ans){
        for(char c:p)std::cout<<c;
        std::cout<<'\n';
    }

    return 0;
}