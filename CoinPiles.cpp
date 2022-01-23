#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(a>b) {
            b = 2*b-a;
            a = b;
        }
        else {
            a = 2*a-b;
            b = a;
        }
        if(a<0) cout<<"NO\n";
        else{
            if(a%3==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}