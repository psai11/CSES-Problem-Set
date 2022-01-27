#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long sum=INT_MIN;
    long long ans=INT_MIN;
    // cout<<sum<<"\n";
    // cout<<ans<<"\n";
    long long n,a;
    cin>>n;
    vector<long long> nums(n);
    // for(auto x:nums) cout<<x<<" ";
    // cout<<"\n";
    for(long long i=0; i<n; i++) {
        cin>>nums[i];
        sum = max(sum+nums[i], nums[i]);
        ans = max(ans, sum);
        // cout<<ans<<" ";
    }
    cout<<ans;

    return 0;
}