#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    string str;
    cin>>str;
    long long ans=0, curr=1;
    char prev = 'Z';
    // cout<<str.length();
    for(long long i=0; i<str.length(); i++) {
        char x = str[i];
        // cout<<x;
        if(x==prev) {
            // cout<<"* ";
            curr++;
        }
        else {
            ans = max(ans, curr);
            curr = 1;
            prev = x;
        }
        ans = max(ans,curr);
    }
    cout<<ans;
    
    
    // cout<<str.size();
    return 0;
}