#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    long long n;
    long long ans = 0;
    cin>>n;
    while(n/5>0) {
        // cout<<ans<<" ";
        ans+=n/5;
        n/=5;
    }
    cout<<ans;
    return 0;
}