#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,d;
    int maxd;
    cin>>t;
    while(t--) {
        cin>>n>>d;
        if(d>=21) {
            cout<<n<<endl;
        }
        else {
            if(d<=10) {
                maxd = pow(2,d);
                if(maxd<=n) cout<<maxd<<endl;
                else cout<<n<<endl;
            }
            else {
                maxd = 1024*pow(3,d-10);
                if(maxd<=n) cout<<maxd<<endl;
                else cout<<n<<endl;
            }
        }
    }
    return 0;
}