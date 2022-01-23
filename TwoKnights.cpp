#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    long long n;
    cin>>n;
    for(long long i=1; i<=n; i++) {
        if(i==1) {
            cout<<0<<endl;
        }
        else if(i==2) {
            cout<<6<<endl;
        }
        else if(i==3) {
            cout<<28<<endl;
        }
        else {
            long long total = (i*i)*(i*i-1)/2;
            long long row = 5 + (i-4)*4 + 5;
            long long row_sep = 2 + (i-4)*2 + 2;
            long long ans = row*(i-2) + row_sep;
            cout<<total - ans<<endl;
        }
    }
    
    return 0;
}