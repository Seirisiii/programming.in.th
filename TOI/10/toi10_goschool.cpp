#include <bits/stdc++.h>
using namespace std;
int m,n;
int o;
bool check[51][51];
int dp[51][51];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cin>>o;
    while(o--){
        int a,b;
        cin>>a>>b;
        check[a][b]=true;
    }
    dp[1][1]=!check[1][1]?1:0;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(check[i][j])continue;
            dp[i][j]+=dp[i-1][j]+dp[i][j-1];
        }
    }
    // for(int i=1;i<=m;++i){
    //     for(int j=1;j<=n;++j){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<dp[m][n];
    return 0;
}
