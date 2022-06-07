#include <bits/stdc++.h>
#include <iterator>

using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> nums(n);
    unordered_map<int,int> arr;

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
        arr[nums[i]] = i;
    }
    int now = 1,loop=1;
    while(now<n) {
        if(arr[now]>arr[now+1]) loop++; 
        now++;
    }
    cout<<loop;
    

    return 0;
}