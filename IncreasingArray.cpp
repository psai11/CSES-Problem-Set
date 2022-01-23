#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    long long n,a;
    vector<long long> arr;
    cin>>n;
    long long ans=0;
    for(long long i=0;i<n;i++) {
        cin>>a;
        arr.push_back(a);
        if(i>=1) {
            if(arr[i]<arr[i-1]) 
            {
                ans+=arr[i-1]-arr[i];
                arr[i] = arr[i-1];
            }
        }    
    }
    cout<<ans;
    return 0;
}