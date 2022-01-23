#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int n;
    cin>>n;
    if(n%4 == 1 || n%4 == 2) {
        cout<<"NO";
    }
    else {
        cout<<"YES"<<endl;
        vector<int> ans1;
        vector<int> ans2;
        int i=1;
        
        if(n%4 == 3) {
            ans1.push_back(1);
            ans1.push_back(2);
            ans2.push_back(3);
            i = 4;

        }
        // cout<<"thru here ";
        int toggle = 1;
        for(i; i<=n; i++) {
            if(toggle<2) ans1.push_back(i);
            else ans2.push_back(i);
            toggle = (toggle+1)%4; 
        }
        

        cout<<ans1.size()<<endl;
        for(auto x: ans1) {
            cout<<x<<" ";
        }

        cout<<"\n"<<ans2.size()<<endl;
        for(auto x: ans2) {
            cout<<x<<" ";
        }
    }
    return 0;
}