#include <bits/stdc++.h>
 
using namespace std;

vector<int> solve(vector<int> items, int n) {
    unordered_map<int,int> freq;
    for(int i=0; i<n; i++) {
        freq[items[i]]++;
    }
    vector<pair<int,int>> sort_freq;
    for(auto x:freq) {
        sort_freq.push_back(make_pair(x.second,x.first));
    }
    sort(sort_freq.begin(),sort_freq.end());

    vector<int> ans;
    for(auto x:sort_freq) {
        while(x.first>0) {
            ans.push_back(x.second);
            x.first--;
        }
    }
    return ans;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a;
    cin>>n;
    vector<int> items;
    for(int i=0; i<n; i++) {
        cin>>a;
        items.push_back(a);
    }

    vector<int> ans;
    ans = solve(items, n);

    for(auto x:ans) {
        cout<<x<<"\n";
   }

    

    return 0;
}