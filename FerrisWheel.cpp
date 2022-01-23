#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX_N = 2e5;

void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, a;
    cin>>n>>x;
    int w[MAX_N];
    for(int i=0; i<n; i++) cin>>w[i];
    sort(w, w+n); 

    int start = 0, last = n-1;
    int ans=0;
    while(start<=last) {
        // cout<<ans<<"*\n";
        if(w[start] + w[last] <= x) {
            ans++;
            start++; last--;
        }
        else {
            ans++;
            last--;
        }
    }
    cout<<ans;
    return 0;
}