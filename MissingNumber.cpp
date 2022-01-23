#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    long long n;
    cin>>n;
    long long max = n*(n+1)/2;
    long long sum = 0;
    int num;
    for(long long i=0; i<n-1; i++) {
        cin>>num;
        sum+=num;
        // cout<<num<<" "<<sum<<"\n";
    }
    cout<<max-sum;
    return 0;
}