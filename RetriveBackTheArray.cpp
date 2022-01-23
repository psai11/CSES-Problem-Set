#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int t,x,n;
    vector<bitset<19>> a;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        bitset<19> num(x);
        a.push_back(num);
        num^=num;
        cout<<num<<"\n";
        if(n==1) cout<< x <<endl;
        else {
            while(--n) {
                if(n)
            }
        }
    }
    return 0;
}   