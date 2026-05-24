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
 
int a ; cin>>a ;
string s ; cin>> s ;
int cnta = 0 ; int cntd= 0 ;
for (auto it : s)
{
    if (it =='A' )
    {
        cnta++;
    }
    else 
    {
        cntd++;
    }
}
if (cnta>cntd)
{
    cout<<"Anton"<<nl;
}

else if ( cntd> cnta)
{
    cout<< "Danik"<<nl;
}

else 
{
    cout<<"Friendship"<<nl;
}
    
}

int main() {
    FAST_IO

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
