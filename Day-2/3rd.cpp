#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
 
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
 
inline ll ceil_div(ll a, ll b) {
    return (a + b - 1) / b;
}
inline void toLowerCase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::/*toupper*/tolower);
}
 
 
 
 
 
void solve() 
{
 
 
string s ; cin>> s ;
string x ;
cin>> x ;
 
toLowerCase(x);
 
toLowerCase(s);
if (s<x)
{
    cout<<"-1";
}
else if (s>x)
{
    cout<<"1";
}
else 
{
   cout<<"0";
}
 
 
 
 
 
 
 
 
 
    
}
 
int main() {
    FAST_IO
 
    int t = 1;
    // cin >> t;
    while (t--) solve();
 
    return 0;
}
