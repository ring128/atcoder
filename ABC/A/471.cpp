#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    int A,B;cin>>A>>B;
    cout<<(A+B==9||A-B==9||A*B==9||B*9==A ? "Nine\n" : "Nein\n")<<'\n';
    return 0;
}    