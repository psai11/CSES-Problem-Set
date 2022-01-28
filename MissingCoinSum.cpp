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


    //1 2 2 7 9
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin>>coins[i];
    sort(coins.begin(), coins.end());
    // cout<<"# ";
    unordered_map<long long,long long> wallet;
    int flag;
    long long req_coin=1;
    vector<long long> curr;

    for(auto x:coins) {
        // cout<<"* ";
        curr.clear();
        flag=0;
        while(req_coin-x==0 || wallet[req_coin-x]==1) {
            // cout<<req_coin<<" ";
            curr.push_back(req_coin);
            flag=1;
            req_coin++;
        }
        for(auto y:curr) wallet[y]++;
        wallet[x]=1;
        if(flag==0) break;
    }

    cout<<req_coin;

    return 0;
}