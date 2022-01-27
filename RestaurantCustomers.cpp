#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a,b;
    cin>>n;
    vector<pair<int, int>> time;
    for(int i=0; i<n; i++) {
        cin>>a>>b;
        time.push_back(make_pair(a, 1));
        time.push_back(make_pair(b, -1));
    }
    sort(time.begin(),time.end());
    int ans=0,final=0;
    for(auto x:time) {
        ans+=x.second;
        final = max(final,ans);
    }
    
    cout<<final;
    
    return 0;
}