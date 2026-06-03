#include <bits/stdc++.h>
using namespace std;
int main(){
    int H, W; cin >> H >> W;
    vector<vector<char>> ans(H, vector<char>(W));
    for(int i = 0; i < H; i++)
        for(int j = 0; j < W; j++) cin >> ans[i][j];
    
    vector<vector<char>> rows;
    for(int i = 0; i < H; i++){
        int count = 0;
        for(int j = 0; j < W; j++)
            if(ans[i][j] == '#') count++;
        if(count > 0) rows.push_back(ans[i]);
    }
    
    vector<bool> keepCol(W, false);
    for(int j = 0; j < W; j++)
        for(int i = 0; i < (int)rows.size(); i++)
            if(rows[i][j] == '#') keepCol[j] = true;
    
    vector<vector<char>> result;
    for(int i = 0; i < (int)rows.size(); i++){
        vector<char> row;
        for(int j = 0; j < W; j++)
            if(keepCol[j]) row.push_back(rows[i][j]);
        result.push_back(row);
    }
    
    for(auto row : result){
        for(char c : row) cout << c;
        cout << "\n";
    }
}
