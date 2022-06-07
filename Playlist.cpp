#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<int> k(n);

    for(int i=0; i<n; i++) {
        cin>>k[i];
    }
    int front=0, back=0;
    int maxlen=0, curr=0;
    set<int> s;
    while(back<n) {
        while(back<n && s.count(k[back])<1) {
            s.insert(k[back]);
            curr++;
            maxlen = max(curr,maxlen);
            back++;
        } 
        while(s.count(k[back])==1 && front<=back) {
            s.erase(k[front]);
            front++;
            curr--;
        }
    }

    cout<<maxlen<<"\n";

    return 0;
}