#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
}
 
int main()
{
    int n, ele;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        s.insert(ele);
    }
    cout << s.size();
    return 0;
}