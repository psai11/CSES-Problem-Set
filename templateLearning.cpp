//int range: -2.10^9 - 2.10^9 (2^31)
//long long range: -9.10^18 - 9.10^18 (2^63)
#include<bits/stdc++.h>

#include<vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define SORT_V(v) sort(v.begin(),v.end())
#define SORT_Ar(a,n) sort(a,a+n)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*--------PRIORITY QUEUE--------*/
    // priority_queue<int> q;
    // q.push(3);
    // q.push(5);
    // q.push(7);
    // q.push(2);
    // cout << q.top() << "\n"; // 7
    // q.pop();
    // cout << q.top() << "\n"; // 5
    // q.pop();
    // q.push(6);
    // cout << q.top() << "\n"; // 6
    // q.pop();

    /*--------QUEUE--------*/
    // queue<int> q;
    // q.push(3);
    // q.push(2);
    // q.push(5);
    // cout << q.front()<<endl; // 3
    // q.pop();
    // cout << q.front(); // 2

    /*--------STACK--------*/
    // stack<int> s;
    // s.push(3);
    // s.push(2);
    // s.push(5);
    // cout << s.top(); // 5
    // s.pop();
    // cout << s.top(); // 2

    /*--------DEQUE--------*/
    // deque<int> d;
    // d.push_back(5); // [5]
    // d.push_back(2); // [5,2]
    // d.push_front(3); // [3,5,2]
    // d.pop_back(); // [3,5]
    // d.pop_front(); // [5]

    /*--------BITSET DS--------*/
    // int n;
    // cin>>n;
    // bitset<16> s;
    // s[1] = 1;
    // s[3] = 1;
    // s[4] = 1;
    // s[7] = 1;
    // s[0]=1;
    // cout << s <<"\n";
    // cout << s[4] << "\n"; // 1
    // cout << s[5] << "\n"; // 0
    // bitset<10> t(string("0010011010")); // from right to left
    // cout<<t<<"\n";
    // for(int i=4; i>=0; i--) {
    //     cout<<t[i];
    // }
    // cout << t[4] << "\n"; // 1
    // cout << t[5] << "\n"; // 0
    // bitset<10> a(string("0010110110"));
    // bitset<10> b(string("1011011000"));
    // cout << (a&b) << "\n"; // 0010010000
    // cout << (a|b) << "\n"; // 1011111110
    // cout << (a^b) << "\n"; // 1001101110

    /*--------MAP DS--------*/
    // map<string,int> m;
    // m["m"] = 4;
    // m["a"] += 1;
    // m["a"] += 1;
    // m["hapischord"] = 5;
    // cout << m["timepass"] << "\n";
    // cout << m["a"] << "\n"; // 0 OR 'null srting'
    // for (auto x : m) {
    //     cout << x.first << " " << x.second << "\n";
    // }

    /*--------SET DS--------*/
    // set<int> s;
    // s.insert(3);
    // s.insert(2);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // // cout<< s[1]; // not correct
    // for (auto x : s) {
    //     cout << x << "\n";
    // }
    // s.erase(3);
    // s.insert(4);
    // cout << s.count(3) << "\n"; // 0
    // cout << s.count(4) << "\n"; // 1
    // auto it = s.find(x); //find the pointer to the specific element
    // if (it == s.end()) {
    //     // x is not found
    // }

    /*--------SIMPLE SORT--------*/
    // vector<tuple<int,int,int>> v;
    // v.push_back({1,2,3});
    // v.push_back({2,3,2});
    // string s = "fdfsafsaffeqrgbn";
    // vi v = {2,3,5,5,8,3,9,1};
    // int a[] = {2,4,2,8,4,0,5};
    // sort(v.begin(),v.end());

    /*--------SUB-STRING MANIPULATION--------*/
    // string a = "hatti";
    // cout<< a[4];
    // string b = a+a;
    // cout << b << "\n"; // hattihatti
    // b[5] = 'v';
    // cout << b << "\n"; // hattivatti
    // string c = b.substr(3,4);
    // cout << c << "\n"; // tiva

    /*--------OP BINARY SEARCH--------*/
    // int array[] = {1,3,3,4,10,10,10,13};
    // SORT_Ar(array,7);
    // int k = 0,n=8;
    // int x = 10;
    // for (int b = n/2; b >= 1; b /= 2) {
    //     while (k+b < n && array[k+b] <= x) k += b;
    // }
    // if (array[k] == x) {
    //     cout<<k;
    // }

    /*--------SEARCH USING STL--------*/
    // auto k = lower_bound(array,array+n,x)-array;
    // if (k < n && array[k] == x) {
    //     // x found at index k
    // }
    // auto a = lower_bound(array, array+n, x);
    // auto b = upper_bound(array, array+n, x);
    // cout << b-a << "\n";
    // auto r = equal_range(array, array+n, x);
    // cout << r.second-r.first << "\n";

    // vector<string> l{"1","10","0","00","001"};
    // string a = "10";
    // // l.pop_back();
    // cout<<count(a.begin(),a.end(),'1');

    // int p[26];
    // char a = 'a';
    // int n = 'a' - 97;
    // cout<<n;
    // int n=4;
    // cout<<(1<<0)<<endl;
    // for(int mask=0; mask<(1<<n); mask++) {
    //     cout<<mask<<" ";
    //     for(int position=0;position<n;position++) {
    //         cout<<(mask&(1<<position));
    //         if(mask&(1<<position)) cout<<"* ";
    //         else cout<<"# ";
    //     }
    //     cout<<endl;
    // }

    vector<int> a{1,3,5,6};
    cout<<lower_bound(a.begin(), a.end(), 4) - a.begin()<<"\n";
    cout<<upper_bound(a.begin(), a.end(), 4) - a.begin();
}