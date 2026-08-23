#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W,K,ans{},dx[4]={-1,0,0,1},dy[4]={0,-1,1,0};
    cin>>H>>W>>K;
    vector<int> h,w;
    vector<pair<int,int>> sm;
    vector<vector<char>> vc(H,vector<char>(W));
    vector<vector<bool>> vb(H,vector<bool>(W,false));
    for(auto& cc:vc)for(char& c:cc)cin>>c;

    for(int i=0;i<H;++i){
        bool tf=true;
        for(int j=0;j<W;++j){
            if(vc[i][j]=='#')tf=false;
        }
        if(tf)h.push_back(i);
    }

    for(int i=0;i<W;++i){
        bool tf=true;
        for(int j=0;j<H;++j){
            if(vc[j][i]=='#'){
                tf=false;
                break;
            }
        }
        if(tf){
            w.push_back(i);
            for(const int& ci:h){
                vb[ci][i]=true;
                sm.push_back({ci,i});
            }
        }
    }

    queue<tuple<int,int,int>> qt;
    for(const auto& [p,q]:sm)qt.push({p,q,0});

    while(!qt.empty()){
        auto [a,b,c]=qt.front();
        qt.pop();

        if(c==K)continue;

        for(int i=0;i<4;++i){
            int na=a+dx[i];
            int nb=b+dy[i];

            if(na>=0&&na<H&&nb>=0&&nb<W){
                if(vc[na][nb]=='.'&&!vb[na][nb]){
                    vb[na][nb]=true;
                    qt.push({na,nb,c+1});
                }
            }
        }
    }

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            if(vc[i][j]=='.'&&vb[i][j])ans++;
        }
    }

    cout<<ans<<'\n';
    return 0;
}