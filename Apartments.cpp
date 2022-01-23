#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX_N = 2e5;

void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,k,a,b;
    cin>>n>>m>>k;
    int people[MAX_N], place[MAX_N];
    for (int i = 0; i < n; i++)
    {
        cin>>people[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>place[i];
    }
    sort(people,people+n);
    sort(place,place+m);
    a = 0; b = 0;
    int ans = 0;
    
    // cout<<people.size()<<" "<<place.size()<<"\n";
    // for(auto x:people) cout<<x<<" ";
    // cout<<"\n";
    // for(auto y:place) cout<<y<<" ";

    while(a<n && b<m) {
        // cout<<a<<" "<<b<<"\n";
        if(place[b]-k <= people[a] && people[a] <= place[b] + k) {
            ans++;
            a++; b++;
        }
        else if(place[b]-k > people[a]) a++;
        else if(place[b]+k < people[a]) b++;
    }
    // cout<<"\n";
    cout<<ans;
    
    return 0;
}