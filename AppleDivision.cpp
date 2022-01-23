#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int  n;
    cin>>n;
    
    vector<int> arr;
    int a;
    long long totalSum=0;
    for(int i=0; i<n; i++) {
        cin>>a;
        totalSum+=a;
        arr.push_back(a);
    }
    long long ans = INT_MAX;
    long long tempSum;
    for(int mask = 0; mask < (1<<n); mask++) {
        tempSum = 0;
        for (int position = 0; position < n; position++)
        {
            if(mask & (1<<position)) {
                tempSum+=arr[position];
            }
        }
        ans = min(ans, abs(2*tempSum - totalSum));
        // cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}