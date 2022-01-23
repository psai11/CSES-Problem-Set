#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int n;
    cin>>n;
    if(n<4 && n>1) cout<<"NO SOLUTION";
    else {
        for(int i = 2; i<=n; i = i+2) {
            cout<<i<<" ";
        }
        for(int i = 1; i<=n; i = i+2) {
            cout<<i<<" ";
        }
    }
    return 0;
}