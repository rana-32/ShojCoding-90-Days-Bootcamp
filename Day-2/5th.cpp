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
 
string s  ; cin>> s ;
string z ="";
for (auto it : s )
{
      if (it != '+')
 
      {
        z.push_back(it );
      }
}
 
sort (z.begin() , z.end());
 
for (int i = 0 ; i< z.size()-1 ; i++)
{
    cout <<z[i] <<'+';
}
cout<<z[z.size()-1];
    
}
 
int main() {
    FAST_IO
 
    int t = 1;
    // cin >> t;
    while (t--) solve();
 
    return 0;
}
