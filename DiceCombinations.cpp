#include <bits/stdc++.h>
 
using namespace std;


vector<int> dp(1000001);
const int mod = 1e9+7;
 
// int solve(int n){
//     if(n<0) return 0;
//     if(n==0) return 1;
//     int res;
//     dp[n] = dp(n-1)+dp(n-2)+solve(n-3)+solve(n-4)+solve(n-5)+solve(n-6);
//     return dp[n];
// }
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    long long ans;
    vector<long long> combs(n+1);
    combs[0] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=6; j++) {
            if(i-j>=0) {
                combs[i] = (combs[i]+combs[i-j])%mod;
            }
        }
    }
    cout<<combs[n];

    return 0;
}