#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll grid(int n, int m, vector<vector<ll>>& dp);
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));
    cout<<grid(n,m,dp)<<endl;
}


ll grid(int n, int m, vector<vector<ll>>& dp) {
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(i == 1 || j == 1) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[n][m];
}
