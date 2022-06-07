#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int x,n;
    cin>>x>>n;
    multiset<int, greater<int>> lengths;
    set<int> lights;
    lengths.insert(x);
    lights.insert(x);
    lights.insert(0);

    int p;
    for(int i=0; i<n; i++) {
        cin>>p;
        auto itt = lights.upper_bound(p);
        auto it1 = itt;
        auto it2 = --itt;
        lights.insert(p);
        auto it3 = lengths.find(*it1-*it2);
        lengths.erase(it3);
        lengths.insert(*it1-p);
        lengths.insert(p-*it2);
        cout<<*lengths.begin()<<" ";
    }


    return 0;
}