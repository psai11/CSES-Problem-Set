#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string x;

    cin>>x;
    sort(x.begin(),x.end());
    vector<string> ans;

    do {
        ans.push_back(x);
    } while(next_permutation(x.begin(),x.end()));

    cout<<ans.size()<<endl;
    for(auto a:ans) {
        cout<<a<<endl;
    }

    return 0;
}