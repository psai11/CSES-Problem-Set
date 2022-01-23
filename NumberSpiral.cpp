#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        long int x,y;
        cin>>x>>y;
        long int ans;
        if(x>y) {
            if(x%2 == 0) {
                ans = x*x - y + 1;
            }
            else {
                ans = (x-1)*(x-1) + 1 + y - 1;
            }
        }
        else {
            if(y%2 == 1) {
                ans = y*y - x + 1;
            }
            else {
                ans = (y-1)*(y-1) + 1 +x - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}