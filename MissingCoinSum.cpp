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
    
    vector<int> denomination(n);
    for (int i = 0; i < n; i++)
    {
        cin>>denomination[i];
    }
    sort(denomination.begin(), denomination.end());
    long long req=1;
    
    for(auto x:denomination) {
        if(x<=req) {
            req += x;
        }
        else {
            break;
        }
    }
    cout<<req;

    return 0;
}