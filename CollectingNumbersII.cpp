#include <bits/stdc++.h>
#include <iterator>

using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> nums(n);
    unordered_map<int,int> arr;

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
        arr[nums[i]] = i;
    } 

    int initial=1,now=1;
    while(now<n-1) {
        if(arr[now]>arr[now+1]) initial++;
        now++;
    }
    arr[0]=-1; arr[n+1]=n;

    int a,b;
    set<pair<int,int>> rels;
    for(int i=0; i<m; i++) {
        cin>>a>>b;
        a--; b--;
        rels.clear();
        rels.insert({nums[a],nums[a]+1});
        rels.insert({nums[a]-1,nums[a]});
        rels.insert({nums[b],nums[b]+1});
        rels.insert({nums[b]-1,nums[b]});
        
        //Before Swap:
        for(auto x:rels) {
            if(arr[x.first]>arr[x.second]) initial--;
        }

        //Swapping Elements:
        swap(nums[a],nums[b]);
        swap(arr[nums[a]],arr[nums[b]]);

        //After Swapping:
        for(auto x:rels) {
            if(arr[x.first]>arr[x.second]) initial++;
        }

        cout<<initial<<endl;
    }

    return 0;
} 