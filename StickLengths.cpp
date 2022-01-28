#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;

    vector<int> lens(n);
    for(int i=0; i<n; i++) cin>>lens[i];
    sort(lens.begin(),lens.end());

    int median = lens[n/2];
    long long cost=0;
    for(auto x:lens) {
        cost+=abs(x-median);
    }
    cout<<cost;

    return 0;
}