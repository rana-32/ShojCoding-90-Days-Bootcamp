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

int cu = 0 ; int cl= 0 ;

for (int i = 0 ; i< s.size() ; i++)
{
    if ( abs (s[i]) >= 65 and abs (s[i])<= 90 )
    {
        cu++;
    }  
    else 
    {
        cl++;
    }
}

if (cu> cl)
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
}

else 
{
     transform(s.begin(), s.end(), s.begin(), ::tolower);

}


cout<<s <<nl;






    
}

int main() {
    FAST_IO

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
