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
 
int  a, b ;  cin>> a >> b ; 


while (b--)
{
    int ld = a % 10 ;
    if (ld ==0 )
    {
        a = a/10;
    }
    else 
    {
        a= a-1 ;
    }
}


cout<<a<<nl ;







    
}

int main() {
    FAST_IO

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
