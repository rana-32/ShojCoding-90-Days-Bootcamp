#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
inline ceil_div(long long  a, long long  b) {
    return (a + b - 1) / b;
}
inline void toLowerCase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::/*toupper*/tolower);
}
 
void solve() 
{
 
 string s ; cin>> s ;
 
 set<char>st ;
 
 for (auto it : s )
 {
    st.insert(it );
 }
 
if (st.size()%2==0)
{
    cout <<"CHAT WITH HER!" <<nl;
}
else 
{
    cout <<"IGNORE HIM!"<<nl;
}
 
 
    
}
 
int main() {
    FAST_IO
 
    int t = 1;
    // cin >> t;
    while (t--) solve();
 
    return 0;
}
