#include <bits/stdc++.h>
 
using namespace std;

bool solve(pair<int, int> &a, pair<int, int> &b) {
    return (a.second<b.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++) {
        cin>>times[i].first>>times[i].second;
    }
    sort(times.begin(), times.end(), solve);
    int ans=0, prev_time=0;
    // cout<<"*";
    for(auto x:times) {
        if(x.first >= prev_time) {
            ans++;
            prev_time = x.second;
        }
    }

    cout<<ans;

    return 0;
}