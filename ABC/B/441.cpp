#include <bits/stdc++.h>
using namespace std;

bool b (vector<char> N, string S){
    for(auto p : S){
        bool tf = false;
        for(auto q : N){
            if(p == q){
                tf = true;
                break;
            }
        }
        if(!tf) return false;
    }
    return true;
}
void a (vector<char> N, vector<char> M, string S){
    bool taka = b(N, S);
    bool aoki = b(M, S);

    if(taka && !aoki){
        cout << "Takahashi\n";
    }
    else if(aoki && !taka){
        cout << "Aoki\n";
    }
    else{
        cout << "Unknown\n";
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<char> N(n), M(m);
    for(int i = 0; i < n; i++) cin >> N[i];
    for(int i = 0; i < m; i++) cin >> M[i];
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; i++){
        string S;
        cin >> S;
        a(N, M, S);
    }    
}