#include <bits/stdc++.h>
 
using namespace std;
 
bool solve(pair<int, int> &a, pair<int, int> &b){
    return a.first<b.first;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; i++) {
        cin>>nums[i].first;
        nums[i].second = i;
    }
    sort(nums.begin(), nums.end());
    
    int high = lower_bound(nums.begin(), nums.end(), make_pair(x, 0)) - nums.begin();
    int low = 0;
    // cout<<low<<" "<<high<<"\n";
    high--;
    int done = 0, curr;
    while(low<high) {
        curr = nums[low].first+nums[high].first;
        if(curr == x) {done=1; break;}
        else if(curr>x) high--;
        else low++;
    }
    if(done) {
        cout<<min(nums[low].second+1,nums[high].second+1)<<" "<<max(nums[low].second+1,nums[high].second+1);
    }
    else cout<<"IMPOSSIBLE";
    
    return 0;
}