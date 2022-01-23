#include <bits/stdc++.h>
#define mod 1000000007 

using namespace std;
 
void solve(){
}
 
int main()
{
    long long n;
    cin>>n;
    if(n==1) cout<<2;
    else{
        vector<long long> twos;
        long long nos = 1;
        long long mux = 2;
        twos.push_back(mux);
        while(nos<n) {
            nos*=2;
            mux=(mux*mux)%mod;
            twos.push_back(mux);
        }
        nos/=2;
        twos.pop_back();
        long long ans = twos[twos.size()-1];
        n=n-nos;
        while(n!=0) {
            // cout<<n<<" "<<nos<<" "<<twos[twos.size()-1]<<" "<<ans<<"\n";
            if(n-nos<0) {
                nos/=2;
                twos.pop_back();
            }
            else {
                n-=nos;
                ans = (ans*twos[twos.size()-1])%mod;
                twos.pop_back();
                nos/=2;
            }
        }
        cout<<ans;
    }
    return 0;
}